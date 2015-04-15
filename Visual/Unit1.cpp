//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
int v[50];                    //Vetor do enunciado
int s,q,n,i;

//Sorteio
randomize();                  //Iniciliza aleatorios
n=StrToInt(ButtonedEdit1->Text);      //Qtd de itens no vetor
for (i=0; i<n; i++)           //Varia de 0 a n-1
    v[i] = random(51)-20;     //Sorteio no item i

//Soma
s=0;
for (i=0; i<n; i++)           //Varia de 0 a n-1
    s=s+v[i];                 //Acumulador
LinkLabel2->Caption="Soma de todos os elementos = " +
								IntToStr(s);

//Quantidade de positivos
q=0;
for (i=0; i<n; i++)           //Varia de 0 a n-1
    if (v[i]>0)               //� positivo?
      q=q+1;                  //+1 em caso afirmativo
LinkLabel3->Caption="Quantidade de positivos = " +
								IntToStr(q);
}
//---------------------------------------------------------------------------
