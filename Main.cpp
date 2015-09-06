// Главный модуль программы (главное окно)
// main.cpp
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "Ask.h"
#include "About.h"
#include "DM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMain *frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
/*
Нажата кнопка "Выход"
*/
void __fastcall TfrmMain::btnExitClick(TObject *Sender)
{
    Close(); /* Закрыть главное окно (выход из программы) */
}
//---------------------------------------------------------------------------
/*
Нажата кнопка "Начать"
*/
void __fastcall TfrmMain::btnStartClick(TObject *Sender)
{
/*
Опции поиска модуля в базе данных
*/
    TLocateOptions Opts;

/*
Очистка опций поиска (обычниый поиск)
*/
    Opts.Clear();

/*
Если модуля с таким именем в таблице модулей нет
*/

    if( !dmC->tblTD->Locate( "NAME", cbModule->Text, Opts ) )
    {
/*
Выдать предупреждение об ошибке
*/

        Application->MessageBox(
            "Модуль с таким названием не найден",
            "Ошибка",
            MB_OK | MB_ICONEXCLAMATION
        );
/*
И вернуться
*/
        return;
    }
/*
Если модуль найден, взять имя таблицы вопросов этого модуля
из таблицы модулей
*/
    dmC->tblAsk->TableName = dmC->tblTDTABLE_NAME->AsString;
/*
Открыть таблицу вопросов модуля
*/
    dmC->tblAsk->Open();

/*
Инициализировать окно теста, передать в него имя
студента и название модуля
*/
    frmAsk->InitAsk( edtName->Text, cbModule->Text, dmC->tblTDTABLE_NAME->AsString);
/*
Перейти тесту
*/
    frmAsk->ShowModal();
/*
Закрыть таблицу запросов модуля
*/
    dmC->tblAsk->Close();
}
//---------------------------------------------------------------------------
/*
Нажата кнопка "О программе"
*/
void __fastcall TfrmMain::btnAboutClick(TObject *Sender)
{
/*
Перейти к окну "О программе"
*/
    frmAbout->ShowModal();
}
//---------------------------------------------------------------------------
/*
Обвновление списка модулей
*/
void __fastcall TfrmMain::UpdateList()
{
/*
Перейти к первой записи в таблице модулей
*/
    dmC->tblTD->First();

/*
Поместить название первого модуля в окно списка
(сделать его по умолчанию)
*/
    cbModule->Text = dmC->tblTDNAME->AsString;
/*
Очистить список
*/
    cbModule->Items->Clear();
/*
Занести названия всех модулей в список
*/
    for( int i = 1; i <= dmC->tblTD->RecordCount; i++ )
    {
        cbModule->Items->Add( dmC->tblTDNAME->AsString );
        dmC->tblTD->Next();
    }
}
//---------------------------------------------------------------------------


