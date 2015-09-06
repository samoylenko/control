/*
Тест
Ask.cpp
*/
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Ask.h"
#include "Result.h"
#include "DM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAsk *frmAsk;
//---------------------------------------------------------------------------
__fastcall TfrmAsk::TfrmAsk(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
/*
Инициализация теста
*/
void __fastcall TfrmAsk::InitAsk(AnsiString Name, AnsiString Module, AnsiString Table)
{
/*
Показать имя студента и название модуля
*/

    edtName->Text = Name;
    edtModule->Text = Module;

/*
Сбросить индикатор прогресса
*/
    ProgressBar1->Min      = 0;
    ProgressBar1->Position = 0;
    ProgressBar1->Max      = dmC->tblAsk->RecordCount;

/*
Сбросить списки ответов и правильности ответов
*/
    Answers  = "";
    AnswersN = "";

/*
Указать текущую таблицу
*/
    dmC->AskQuery->SQL->Strings[1] = Table;
}
//---------------------------------------------------------------------------
/*
Осуществлен переход к новой записи в таблице
вопросов текущего модуля
*/

void __fastcall TfrmAsk::AfterScroll()
{
    TLocateOptions Opts;

/*
Подсчет количества вопросов в текущей теме

Делается выборка всех вопросов текущей темы
и берется их количество
*/
    dmC->AskQuery->Parameters->ParamByName("LABNAME")->Value = dmC->tblAskLABNAME->AsString;
    dmC->AskQuery->Open();

    Opts.Clear();
    dmC->AskQuery->Locate( "ANSWER1", Variant( dmC->tblAskANSWER1->AsString ), Opts );

/*
Показать название темы, номер текущего вопроса и количество вопросов
*/
    QGroup->Caption = "Тема: \"" + dmC->tblAskLABNAME->AsString + "\" - Вопрос № " +
                      dmC->AskQuery->RecNo + " из " + dmC->AskQuery->RecordCount;;

/*
Закрыть выборку
*/

    dmC->AskQuery->Close();

/*
Заполнение вопросов
*/
    Answer->Items->Clear();
    for( int i = 1; i <= 5; i++ )
    {
        Answer->Items->Add( dmC->tblAsk->FieldByName("ANSWER" + IntToStr(i))->AsString );
    }

/*
Если на этот вопрос не еще отвечали
*/

    if( dmC->tblAsk->RecNo > AnswersN.Length() )
    {
/*
Установить указатель на первый
*/
        Answer->ItemIndex = 0;
    }
    else
    {
/*
Если уже отвечали, то установить на ответ
*/
        Answer->ItemIndex = StrToInt( AnswersN[dmC->tblAsk->RecNo] ) - 1;
    }

/*
Обновить индикатор прогресса
*/
    ProgressBar1->Position = dmC->tblAsk->RecNo-1;
}
//---------------------------------------------------------------------------
/*
Нажата кнопка "Дальше"
*/
void __fastcall TfrmAsk::btnNextClick(TObject *Sender)
{
/*
Если на этот вопрос еще не отвечали
*/
    if( AnswersN.Length() < dmC->tblAsk->RecNo )
    {
/*
Добавить ответ в список ответов
*/
      AnswersN += IntToStr( Answer->ItemIndex + 1);
    }
    else
    {
/*
Если уже отвечали,
обновить номер ответа
*/
      AnswersN[dmC->tblAsk->RecNo] = IntToStr( Answer->ItemIndex + 1)[1];
    }

/*
Если ответили правильно
*/
    if( Answer->ItemIndex + 1 == dmC->tblAskRIGHT->AsInteger )
    {
/*
Добавить единицу ("правильно") в список правильности ответов
*/
        Answers += "1";
    }
    else
    {
/*
Если ответили неправильно, добавить ноль ("неправильно")
*/
        Answers += "0";
    }

/*
Если опрос закончен
*/
    if( dmC->tblAsk->RecNo == dmC->tblAsk->RecordCount )
    {
/*
Вывести окно результата и вернуться к главному окну
*/
        frmResult->InitResult( edtName->Text, Answers, AnswersN, edtModule->Text );
        frmResult->ShowModal();
        Close();
    }

/*
Если опрос не закончен, перейти к следующему вопросу
*/
    dmC->tblAsk->Next();
}
//---------------------------------------------------------------------------
/*
Нажата кнопка "Назад"
*/
void __fastcall TfrmAsk::btnPrevClick(TObject *Sender)
{
/*
Если это - первый вопрос, то ничего не делать
*/
    if( dmC->tblAsk->RecNo == 1 ) return;

/*
Перейти к предыдущему вопросу
*/
    Answers.Delete( Answers.Length(), 1 );
    dmC->tblAsk->Prior();
}
//---------------------------------------------------------------------------


