/*
Окно выдачи результата
result.cpp
*/
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Result.h"
#include "DM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmResult *frmResult;
//---------------------------------------------------------------------------
__fastcall TfrmResult::TfrmResult(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
/*
Инициализация результата
*/
void __fastcall TfrmResult::InitResult(AnsiString Name, AnsiString Answers, AnsiString AnswersN, AnsiString Module)
{
    int i, Right, len;

/*
Показать имя студента и название модуля
*/
    edtName->Text = Name;
    edtModule->Text = Module;

/*
Len - полное количество ответов
right = количество правильных ответов
*/
    len = Answers.Length();
    Right = 0;

/*
Подсчитать количество правильных ответов -
пройти по списку правильных ответов и посчитать
там количество единиц
*/
    for( i = 1; i <= len; i++ )
    {
        if( Answers[i] == '1' ) Right++;
    }
/*
Выдача результата.
*/

/*
Очистить результат
*/
    Result->Lines->Clear();

/*
Добавить в результат количество вопросов, правильных ответов,
неправильных ответов, процент
*/
    Result->Lines->Add("Вопросов: " + IntToStr( len ));
    Result->Lines->Add("Правильных ответов: " + IntToStr( Right ));
    Result->Lines->Add("Неправильных ответов: " + IntToStr( Answers.Length() - Right ));
    Result->Lines->Add("Процент: " + FloatToStr( 100 * Right / len ) + "%" );
    Result->Lines->Add("------------------------------------------------------");
/*
Подробно о каждом вопросе
*/
    Result->Lines->Add("Подробно:");
    Result->Lines->Add("");

/*
Перейти к первом вопросу
*/
    dmC->tblAsk->First();

/*
Для каждого вопроса
*/
    for( i = 1; i <= len; i++ )
    {
        AnsiString nnum = AnswersN[i];

/*
Выдать заголовок вопроса
*/
        Result->Lines->Add("Вопрос №" + IntToStr( i ) + ":" );
/*
Выдать сам вопрос
*/

        Result->Lines->Add(dmC->tblAskQUESTION->Value);
        Result->Lines->Add("");
        Result->Lines->Add("Ответ:");
/*
Выдать ответ
*/
        Result->Lines->Add( dmC->tblAsk->FieldByName( "ANSWER" + nnum)->AsString );
        Result->Lines->Add("");

/*
Если на вопрос ответили правильно ("1"), выдать "верно"
если нет ("0") - выдать "не верно"
*/
        if( Answers[i] == '1' )
        {
            Result->Lines->Add("Верно");
        }
        else
        {
            Result->Lines->Add("Не верно");
        }
        Result->Lines->Add("---------------------------");

/*
Перейти к следующему вопросу.
*/
        dmC->tblAsk->Next();
    }
}
//---------------------------------------------------------------------------
/*
Нажата кнопка "Сохранить"
*/


void __fastcall TfrmResult::btnSaveClick(TObject *Sender)
{
    int file;

/*
Выдать диалог сохранения файла
*/
    SaveD->FileName = edtName->Text;
    if( SaveD->Execute() )
    {
/*
Если не отменили
создать файл
*/

        file = FileCreate( SaveD->FileName );

/*
И записать в него заголовок результата
*/

        FileWrite( file, "Студент: ", sizeof("Студент: ")-1 );
        FileWrite( file, edtName->Text.c_str(), edtName->Text.Length() );
        FileWrite( file, "\n", sizeof("\n")-1);
        FileWrite( file, "Модуль: ", sizeof("Модуль: ")-1 );
        FileWrite( file, edtModule->Text.c_str(), edtModule->Text.Length() );
        FileWrite( file, "\n", sizeof("\n")-1);
        FileWrite( file, "---------------------------", sizeof("---------------------------")-1 );
        FileWrite( file, "\n", sizeof("\n")-1);

/*
Записать в файл сам результат построчно
*/
        for( int i = 1; i < Result->Lines->Count; i++ )
        {
            FileWrite( file, Result->Lines->Strings[i-1].c_str() , Result->Lines->Strings[i-1].Length() );
            FileWrite( file, "\n", sizeof("\n")-1);
        }
/*
Закрыть файл
*/
        FileClose( file );
    }
}
//---------------------------------------------------------------------------


