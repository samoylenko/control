//---------------------------------------------------------------------------

#ifndef DMH
#define DMH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <Db.hpp>
//---------------------------------------------------------------------------
class TdmC : public TDataModule
{
__published:	// IDE-managed Components
    TADOTable *tblAsk;
    TIntegerField *tblAskID;
    TWideStringField *tblAskLABNAME;
    TMemoField *tblAskQUESTION;
    TWideStringField *tblAskANSWER1;
    TWideStringField *tblAskANSWER2;
    TWideStringField *tblAskANSWER3;
    TWideStringField *tblAskANSWER4;
    TWideStringField *tblAskANSWER5;
    TIntegerField *tblAskRIGHT;
    TDataSource *dsAsk;
    TADOQuery *AskQuery;
    TADOConnection *AskConnection;
    TADOTable *tblTD;
    TAutoIncField *tblTDID;
    TWideStringField *tblTDNAME;
    TWideStringField *tblTDTABLE_NAME;
    TAutoIncField *AskQueryID;
    TWideStringField *AskQueryLABNAME;
    TMemoField *AskQueryQUESTION;
    TWideStringField *AskQueryANSWER1;
    TWideStringField *AskQueryANSWER2;
    TWideStringField *AskQueryANSWER3;
    TWideStringField *AskQueryANSWER4;
    TWideStringField *AskQueryANSWER5;
    TIntegerField *AskQueryRIGHT;
    void __fastcall DataModuleCreate(TObject *Sender);
    void __fastcall tblAskAfterScroll(TDataSet *DataSet);
private:	// User declarations
public:		// User declarations
    __fastcall TdmC(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TdmC *dmC;
//---------------------------------------------------------------------------
#endif
