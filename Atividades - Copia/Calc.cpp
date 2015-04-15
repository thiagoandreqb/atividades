//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Calc.h"
#include "math.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCalculadora *Calculadora;
//---------------------------------------------------------------------------
__fastcall TCalculadora::TCalculadora(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void TCalculadora::Foco()
{
	ButtonedEditValor->SetFocus();
	ButtonedEditValor->SelStart = 99999;
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::Button0Click(TObject *Sender)
{
	if (ButtonedEditValor->Text == 0 )
	{
		ButtonedEditValor->Text = 0;
	}
	else
	{
		ButtonedEditValor->Text =	ButtonedEditValor->Text + 0;
		Foco();
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::Button1Click(TObject *Sender)
{
	if (ButtonedEditValor->Text == 0 )
	{
		ButtonedEditValor->Text = 1;
	}
	else
	{
		ButtonedEditValor->Text = ButtonedEditValor->Text +  1;
		Foco();
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::Button2Click(TObject *Sender)
{
	if (ButtonedEditValor->Text == 0 )
	{
		ButtonedEditValor->Text = 2;
	}
	else
	{
		ButtonedEditValor->Text = ButtonedEditValor->Text + 2;
		Foco();
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::Button3Click(TObject *Sender)
{
	if (ButtonedEditValor->Text == 0 )
	{
		ButtonedEditValor->Text = 3;
	}
	else
	{
		ButtonedEditValor->Text = ButtonedEditValor->Text + 3;
		Foco();
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::Button4Click(TObject *Sender)
{
	if (ButtonedEditValor->Text == 0 )
	{
		ButtonedEditValor->Text = 4;
	}
	else
	{
		ButtonedEditValor->Text = ButtonedEditValor->Text + 4;
		Foco();
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::Button5Click(TObject *Sender)
{
	if (ButtonedEditValor->Text == 0 )
	{
		ButtonedEditValor->Text = 5;
	}
	else
	{
		ButtonedEditValor->Text = ButtonedEditValor->Text + 5;
		Foco();
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::Button6Click(TObject *Sender)
{
	if (ButtonedEditValor->Text == 0 )
	{
		ButtonedEditValor->Text = 6;
	}
	else
	{
		ButtonedEditValor->Text = ButtonedEditValor->Text + 6;
		Foco();
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::Button7Click(TObject *Sender)
{
	if (ButtonedEditValor->Text == 0 )
	{
		ButtonedEditValor->Text = 7;
	}
	else
	{
		ButtonedEditValor->Text = ButtonedEditValor->Text + 7;
		Foco();
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::Button8Click(TObject *Sender)
{
	if (ButtonedEditValor->Text == 0 )
	{
		ButtonedEditValor->Text = 8;
	}
	else
	{
		ButtonedEditValor->Text = ButtonedEditValor->Text + 8;
		Foco();
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::Button9Click(TObject *Sender)
{
	if (ButtonedEditValor->Text == 0 )
	{
		ButtonedEditValor->Text = 9;
	}
	else
	{
		ButtonedEditValor->Text = ButtonedEditValor->Text + 9;
		Foco();
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::ButtonVirgulaClick(TObject *Sender)
{
//ButtonedEditValor->Text.Pos(',');

	if (virgula == true)
	{
		Foco();
	}
	else
	{
		if (ButtonedEditValor->Text == "")
		{
			ButtonedEditValor->Text = "0,";
			virgula = true;
		}
		else
		{
			ButtonedEditValor->Text = ButtonedEditValor->Text + ",";
			Foco();
			virgula = true;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::ButtonLimparAtualClick(TObject *Sender)
{
	ButtonedEditValor->Text = "0";
	ButtonedEditOperador->Text = "";
	Foco();
	virgula = false;
	ButtonedEditValor->Font->Size = 16;
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::ButtonLimparTudoClick(TObject *Sender)
{
	ButtonedEditValor->Text = "0";
										numero1 = 0;
										numero2 = 0;
										total   = 0;
	ButtonedEditOperador->Text = "";
	Foco();
	virgula = false;
	ButtonedEditValor->Font->Size = 16;
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::ButtonSomarClick(TObject *Sender)
{
	if (ButtonedEditValor->Text == "")
	{
		operador = '+';
		ButtonedEditOperador->Text = (String)numero1 + "" + operador;
		ButtonedEditValor->Text = "";
	}
	else
	{
		numero1 = ButtonedEditValor->Text.ToDouble();
													operador = '+';
		ButtonedEditOperador->Text = (String)numero1 + "" + operador;
		ButtonedEditValor->Text = "";
		Foco();
		virgula = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::ButtonSubtrairClick(TObject *Sender)
{
	if (ButtonedEditValor->Text == "")
	{
		operador = '-';
		ButtonedEditOperador->Text = (String)numero1 + "" + operador;
		ButtonedEditValor->Text = "";
	}
	else
	{
		numero1 = ButtonedEditValor->Text.ToDouble();
													operador = '-';
		ButtonedEditOperador->Text = (String)numero1 + "" + operador;
		ButtonedEditValor->Text = "";
		Foco();
		virgula = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::ButtonDividirClick(TObject *Sender)
{
	if (ButtonedEditValor->Text == "")
	{
		operador = '/';
		ButtonedEditOperador->Text = (String)numero1 + "" + operador;
		ButtonedEditValor->Text = "";
	}
	else
	{
		numero1 = ButtonedEditValor->Text.ToDouble();
													operador = '/';
		ButtonedEditOperador->Text = (String)numero1 + "" + operador;
		ButtonedEditValor->Text = "";
		Foco();
		virgula = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::ButtonMultiplicarClick(TObject *Sender)
{
	if (ButtonedEditValor->Text == "")
	{
		operador = '*';
		ButtonedEditOperador->Text = (String)numero1 + "" + operador;
		ButtonedEditValor->Text = "";
	}
	else
	{
		numero1 = ButtonedEditValor->Text.ToDouble();
													operador = '*';
		ButtonedEditOperador->Text = (String)numero1 + "" + operador;
		ButtonedEditValor->Text = "";
		Foco();
		virgula = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::ButtonResultadoClick(TObject *Sender)
{
	if (ButtonedEditValor->Text == "")
	{
		operador = '/';
	}
	else
	{
		numero2 = ButtonedEditValor->Text.ToDouble();
		if (numero2 == 0 && operador == '/')
		{
				ButtonedEditValor->Font->Size = 7;
				ButtonedEditValor->Text = "Impossível dividir por zero";
				Foco();

		}
		else
		{
			switch(operador)
			{
				case '-': total = (numero1 - numero2);break;
				case '+': total = (numero1 + numero2);break;
				case '*': total = (numero1 * numero2);break;
				case '/': total = (numero1 / numero2);break;
			}
				ButtonedEditValor->Text = total;
				ButtonedEditOperador->Text = "";
				Foco();
				virgula = false;
		}
	}

//	if (ButtonedEditValor->Text > ButtonedEditValor->MaxLength)
//		{
//			ButtonedEditValor->Font->Size = 7;
//			ButtonedEditValor->Text = "Valor excedido";
//			Foco();
//
//	if (ButtonedEditValor->Text == "Impossível dividir por zero")
//
//	{
//		Button0->Enabled = false;
//		Button1->Enabled = false;
//		Button2->Enabled = false;
//		Button3->Enabled = false;
//		Button4->Enabled = false;
//		Button5->Enabled = false;
//		Button6->Enabled = false;
//		Button7->Enabled = false;
//		Button8->Enabled = false;
//		Button9->Enabled = false;
//		ButtonDividir->Enabled = false;
//		ButtonSomar->Enabled = false;
//		ButtonSubtrair->Enabled = false;
//		ButtonMultiplicar->Enabled = false;
//		ButtonResultado->Enabled = false;
//	}

}
//---------------------------------------------------------------------------


void __fastcall TCalculadora::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
	WORD keySubtrair = 109;
	if (Key == keySubtrair)
		ButtonSubtrair->Click();

	WORD keySomar = 107;
	if (Key == keySomar)
		ButtonSomar->Click();

	WORD keyMultiplicar = 106;
	if (Key == keyMultiplicar)
		ButtonMultiplicar->Click();

	WORD keyDividir = 111;
	if (Key == keyDividir)
		ButtonDividir->Click();

	WORD keyResultado = 13;
	if (Key == keyResultado)
		ButtonResultado->Click();

	WORD keyLimparTudo = 27;
	if (Key == keyLimparTudo)
		ButtonLimparTudo->Click();

	if (Key == 110 && virgula == false)
	{
		ButtonedEditValor->Text = ButtonedEditValor->Text.ToDouble();
		Foco ();
	}
	else
	{
		virgula = true;
	}

	switch (Key)
	{
		case 	96: if (ButtonedEditValor->Text == 0) ButtonedEditValor->Text = "";break;
		case 	97: if (ButtonedEditValor->Text == 0) ButtonedEditValor->Text = "";break;
		case 	98: if (ButtonedEditValor->Text == 0) ButtonedEditValor->Text = "";break;
		case 	99: if (ButtonedEditValor->Text == 0) ButtonedEditValor->Text = "";break;
		case 100: if (ButtonedEditValor->Text == 0) ButtonedEditValor->Text = "";break;
		case 101: if (ButtonedEditValor->Text == 0) ButtonedEditValor->Text = "";break;
		case 102: if (ButtonedEditValor->Text == 0) ButtonedEditValor->Text = "";break;
		case 103: if (ButtonedEditValor->Text == 0) ButtonedEditValor->Text = "";break;
		case 104: if (ButtonedEditValor->Text == 0) ButtonedEditValor->Text = "";break;
		case 105: if (ButtonedEditValor->Text == 0) ButtonedEditValor->Text = "";break;
	}
	if(Shift.ToInt()==1 )
	{
		ShowMessage(Key);
	}
//	if(Key > 48 && Key < 57 || Key > 96 && Key < 111) //|| Key 190 188  )
//		ShowMessage("NUMERO");
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::FormShow(TObject *Sender)
{
	ButtonedEditValor->Text = 0;
	Foco();
}
//---------------------------------------------------------------------------

void __fastcall TCalculadora::FormKeyUp(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if (ButtonedEditValor->Text == '+')
	{
		ButtonedEditValor->Text = "";
	}

	if (ButtonedEditValor->Text == '-')
	{
		ButtonedEditValor->Text = "";
	}

	if (ButtonedEditValor->Text == '*')
	{
		ButtonedEditValor->Text = "";
	}

	if (ButtonedEditValor->Text == '/')
	{
		ButtonedEditValor->Text = "";
	}
}
//---------------------------------------------------------------------------


void __fastcall TCalculadora::ButtonApagarClick(TObject *Sender)
{
	ButtonedEditValor->Text = ButtonedEditValor->Text.SubString(0, ButtonedEditValor->Text.Length() -1);
	Foco();
}
//---------------------------------------------------------------------------



void __fastcall TCalculadora::FormKeyPress(TObject *Sender, System::WideChar &Key)

{
 //ShowMessage(Key);
 int i = 0;
}
//---------------------------------------------------------------------------

