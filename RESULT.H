//---------------------------------------------------------------------------

#ifndef ResultH
#define ResultH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TfrmResult : public TForm
{
__published:	// IDE-managed Components
    TEdit *edtName;
    TLabel *Label1;
    TMemo *Result;
    TLabel *Label2;
    TBitBtn *btnExit;
    TBitBtn *btnSave;
    TSaveDialog *SaveD;
    TEdit *edtModule;
    TLabel *Label3;
    void __fastcall btnSaveClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmResult(TComponent* Owner);
    void __fastcall InitResult(AnsiString Name, AnsiString Answers, AnsiString AnswersN, AnsiString Module);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmResult *frmResult;
//---------------------------------------------------------------------------
#endif
