//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("Control.res");
USEFORM("Main.cpp", frmMain);
USEFORM("Ask.cpp", frmAsk);
USEFORM("About.cpp", frmAbout);
USEFORM("Result.cpp", frmResult);
USEFORM("DM.cpp", dmC); /* TDataModule: File Type */
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TfrmMain), &frmMain);
         Application->CreateForm(__classid(TfrmAsk), &frmAsk);
         Application->CreateForm(__classid(TfrmAbout), &frmAbout);
         Application->CreateForm(__classid(TfrmResult), &frmResult);
         Application->CreateForm(__classid(TdmC), &dmC);
         Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
