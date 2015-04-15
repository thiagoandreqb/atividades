//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Principal.cpp", frmPrincipal);
USEFORM("Unit2.cpp", qt2);
USEFORM("Unit1.cpp", exercicios);
USEFORM("LerCartaPlotar.cpp", frmLerCartaPlotar);
USEFORM("Calc.cpp", Calculadora);
USEFORM("Unit3.cpp", qt3);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TfrmPrincipal), &frmPrincipal);
		Application->CreateForm(__classid(TCalculadora), &Calculadora);
		Application->CreateForm(__classid(TfrmLerCartaPlotar), &frmLerCartaPlotar);
		Application->CreateForm(__classid(Texercicios), &exercicios);
		Application->CreateForm(__classid(Tqt2), &qt2);
		Application->CreateForm(__classid(Tqt3), &qt3);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
