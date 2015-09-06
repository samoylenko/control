//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DM.h"
#include "Main.h"
#include "Ask.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TdmC *dmC;
//---------------------------------------------------------------------------
__fastcall TdmC::TdmC(TComponent* Owner)
    : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TdmC::DataModuleCreate(TObject *Sender)
{
    frmMain->UpdateList();    
}
//---------------------------------------------------------------------------

void __fastcall TdmC::tblAskAfterScroll(TDataSet *DataSet)
{
    frmAsk->AfterScroll();    
}
//---------------------------------------------------------------------------

