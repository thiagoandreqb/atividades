//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Texercicios *exercicios;
//---------------------------------------------------------------------------
__fastcall Texercicios::Texercicios(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Texercicios::Button2Click(TObject *Sender)
{
	qt2->Show();
}
//---------------------------------------------------------------------------


