//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Principal.h"
#include "Node.h"
#include "NoParrudo.h"
#include "Calc.h"
#include <vector>
#include "LerCartaPlotar.h"
#include "Unit1.h"

using std::vector;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmPrincipal *frmPrincipal;
//---------------------------------------------------------------------------
__fastcall TfrmPrincipal::TfrmPrincipal(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::FormCreate(TObject *Sender)
{
/*
int i, j;
int matriz[5][5];
String saida="";

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (j>i)
			{
				matriz[i][j] = 0;
			}
			else if (i==0)
			{
				matriz[i][j] = 1;
			}
			else if (j>0)
			{
				int a = matriz[i-1][j-1];
				int b = matriz[i-1][j];

				matriz[i][j] = a+b;
			}
			else
			{
			int b = matriz[i-1][j];

			matriz[i][j] = b;
			}
		}
		//saida=saida+(String)matriz[i][j]+" ";
	}
	//saida=saida+"\r\n";
	//ShowMessage(saida);

	for (int l = 0; l < 5; l++) {
		for (int k = 0; k < 5; k++) {
			saida = saida + String(matriz[l][k]) + " ";
		}
		saida = saida + sLineBreak  ;
	}
	ShowMessage(saida);
*/
}
//---------------------------------------------------------------------------
void TfrmPrincipal::TesteWhile()
{
	bool percorrer = true;
	int contador = 1;
	String teste = "1231&45&789&121.1&1";
	String numero = "";

	while(percorrer)
	{
		if(contador <= teste.Length())
		{
			if(teste[contador] == '&')
			{
				ShowMessage(numero);
				numero = "";
			}
			else
			{
				numero = numero + teste[contador];
			}
		}
		else
		{
			percorrer = false;
		}
		contador++;
	}

}
//---------------------------------------------------------------------------
void TfrmPrincipal::TesteStruct()
{
	struct Node_ //nome da estrutura
	{
		int a;
		int b;
		String nome;
	} no; //variaveis

	no.a = 1;
	no.b = 2;
	no.nome = "Thiago";
	ShowMessage("ID: " + String(no.a) + " ANO: " + no.b + " Nome:"+no.nome);
	Node_ novoNo = {3,4,"Bezerra"};
	ShowMessage("ID: " + String(novoNo.a) + " ANO: " + novoNo.b + " Nome:"+novoNo.nome);

}
//---------------------------------------------------------------------------
float TfrmPrincipal::calcularQuadrado(float valor)
{
	return pow(valor,2);
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::Button1Click(TObject *Sender)
{
	TesteWhile();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::Button2Click(TObject *Sender)
{
	TesteStruct();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::Button3Click(TObject *Sender)
{
	ShowMessage(String(calcularQuadrado(1)));

	int a = 1;//Endere�o '1'
	funcaoParametroPorValor(a);
	ShowMessage(String(a));

	funcaoParametroPorReferencia(a);
	ShowMessage(String(a));
}
//---------------------------------------------------------------------------
void TfrmPrincipal::funcaoParametroPorValor(int parametroCopia)
{
	parametroCopia++;
	//N�o precisa de RETURN, pois tem retorno VOID
}
//---------------------------------------------------------------------------
void TfrmPrincipal::funcaoParametroPorReferencia(int &parametroReferencia)
{
	parametroReferencia++;
	//N�o precisa de RETURN, pois tem retorno VOID
}
//---------------------------------------------------------------------------




void __fastcall TfrmPrincipal::Button4Click(TObject *Sender)
{
	Node meuPrimeiroNo;//Aloco memoria e consequentemente o endere�o
	meuPrimeiroNo.b = 123;
	ShowMessage(String(meuPrimeiroNo.b));
	meuPrimeiroNo.calcularQuadrado();
	meuPrimeiroNo.setA(1);
	ShowMessage(String(meuPrimeiroNo.getA()));

	NoParrudo meuPrimeiroNoParrudo;

	meuPrimeiroNo.setB(2);
	ShowMessage(String(meuPrimeiroNo.getB()));

	meuPrimeiroNo.setC(3);
	ShowMessage(String(meuPrimeiroNo.getC()));

	ShowMessage(meuPrimeiroNo.getAStr() + " " + meuPrimeiroNo.getBStr() + " " + meuPrimeiroNo.getCStr());

	meuPrimeiroNo.minhaClasse();
	meuPrimeiroNoParrudo.minhaClasse();

	NoParrudo noMisterioso;
	noMisterioso = meuPrimeiroNoParrudo;

	noMisterioso.minhaClasse();
//	noMisterioso = <
}
//---------------------------------------------------------------------------


void __fastcall TfrmPrincipal::Button5Click(TObject *Sender)
{
	try
	{
		//String a (10.0f/0.0f);
		double a[10];
		float teste;
		int tsdsads;

		vector<float> testeVector;

		testeVector.push_back(1.0);
		testeVector.push_back(2.0);
		testeVector.push_back(3.0);
		ShowMessage(testeVector.size());//tamanho 3

//		ShowMessage(testeVector.back());
//		testeVector.pop_back();
//		ShowMessage(testeVector.size());//tamanho 3
//		ShowMessage(testeVector.back());
//		testeVector.pop_back();
//		ShowMessage(testeVector.size());//tamanho 3
//		ShowMessage(testeVector.back());
//		testeVector.pop_back();
//		ShowMessage(testeVector.size());//tamanho 3
//		ShowMessage(teste);
//		testeVector.pop_back();
//		ShowMessage(testeVector.size());
//		double saida = testeVector.at(1000);
//		int aasdasd;

		vector<Node> listaDeNos;

		Node noTeste(1,2);
		noTeste.addInt(5);

		listaDeNos.push_back(noTeste);

		Node noTesteDois(3,4);
		noTesteDois.addInt(99);
		noTesteDois.addInt(101);
		noTesteDois.addInt(44);


		listaDeNos.push_back(noTesteDois);

		listaDeNos.push_back(Node(5,6));
		listaDeNos.at(2).addInt(69);

		for (int i = 0; i < listaDeNos.size(); i++)
		{
			Node noTemporario;
			noTemporario = listaDeNos.at(i);//atribui um n� (da listaDeNos) para noTemporario
			for (int j = 0; j < noTemporario.tamInt(); j++)
			{
				ShowMessage(noTemporario.lerInt(j));
			}
			ShowMessage(listaDeNos.at(i).getAStr() + " " + listaDeNos.at(i).getBStr());
		}



	}
	catch (...)
	{
		ShowMessage("DIVIS�O POR ZERO!!!!");
	}

}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::Button7Click(TObject *Sender)
{
	Calculadora->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::Button8Click(TObject *Sender)
{
	frmLerCartaPlotar->Show();
}
//---------------------------------------------------------------------------



void __fastcall TfrmPrincipal::Button12Click(TObject *Sender)
{
	exercicios->Show();
}
//---------------------------------------------------------------------------

