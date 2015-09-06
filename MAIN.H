//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <DBCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmMain : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TEdit *edtName;
        TLabel *Label2;
    TBitBtn *btnStart;
    TBitBtn *btnExit;
    TSpeedButton *btnAbout;
    TComboBox *cbModule;
        void __fastcall btnExitClick(TObject *Sender);
    void __fastcall btnStartClick(TObject *Sender);
    void __fastcall btnAboutClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfrmMain(TComponent* Owner);
    void __fastcall UpdateList();
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif
