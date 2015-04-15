//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tqt2 *qt2;
//---------------------------------------------------------------------------
__fastcall Tqt2::Tqt2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tqt2::Button1Click(TObject *Sender)
{
	int numero;
	String valor, valor2, valor3, valor4, valor5;

	numero = Edit1->Text.ToInt();

	try
	{
		if (numero%2 != 0)
		{
			for (int i = 1; i <= numero; i++)
			{
					valor += i;
					valor = valor + " ";
			}
			for (int i = 2; i <= (numero -1); i++)
			{
					valor2 += i;
					valor2 = valor2 + " ";
			}
			for (int i = 3; i <= (numero -2); i++)
			{
					valor3 += i;
					valor3 = valor3 + " ";
			}
			for (int i = 4; i <= (numero -3); i++)
			{
					valor4 += i;
					valor4= valor4 + " ";
			}
			for (int i = 5; i <= (numero -4); i++)
			{
					valor5 += i;
					valor5= valor5 + " ";
			}
				ShowMessage(valor + "\n   " + valor2 + "\n      " + valor3 + "\n         " + valor4 + "\n            " + valor5);
		}
		else
		{
			ShowMessage("O número de entrada deve ser sempre ímpar.");
		}
	}
	catch(Exception &e)
	{
		ShowMessage("Valor inválido");
	}
	catch(...)
	{
		ShowMessage("Valor inválido");
	}
}
//---------------------------------------------------------------------------
