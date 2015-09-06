//---------------------------------------------------------------------------

#ifndef AskH
#define AskH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <ADODB.hpp>
#include <Db.hpp>
#include <DBCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmAsk : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TEdit *edtName;
    TGroupBox *QGroup;
    TRadioGroup *Answer;
    TBitBtn *btnNext;
    TBitBtn *btnPrev;
    TBitBtn *btnQuit;
    TProgressBar *ProgressBar1;
    TLabel *Label2;
    TDBMemo *DBMemo1;
    TEdit *edtModule;
    TLabel *Label3;
    void __fastcall AfterScroll();
    void __fastcall btnNextClick(TObject *Sender);
    void __fastcall btnPrevClick(TObject *Sender);
private:
    AnsiString Answers;	// User declarations
    AnsiString AnswersN;
public:		// User declarations
    __fastcall TfrmAsk(TComponent* Owner);
    void __fastcall InitAsk(AnsiString Name, AnsiString Module, AnsiString Table);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAsk *frmAsk;
//---------------------------------------------------------------------------
#endif
