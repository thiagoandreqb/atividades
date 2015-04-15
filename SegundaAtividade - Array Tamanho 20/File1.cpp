#include <vcl.h>
#include <windows.h>

#pragma hdrstop
#pragma argsused

#include <tchar.h>

#include <stdio.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	const int TAMANHO_DO_ARRAY = 3;
	//Arrays e Laços
	int arrayDeInteiro[TAMANHO_DO_ARRAY];
	arrayDeInteiro[0] = 13;
	arrayDeInteiro[1] = 40;
	arrayDeInteiro[2] = 45;

	cout<<"ELEICAO 2014"<<endl;
	cout<<"DIGITE O NUMERO DO SEU CANDIDATO"<<endl;
	cin>>arrayDeInteiro[i];

	cout<<arrayDeInteiro[i];
	/*
	for(inicializacao adas var; condicao de parada; incremento)
	{

	}
	*/

	/*for( int i = 5; i < 20; ++i)
	{
		arrayDeInteiro[i] = arrayDeInteiro[i-1] * 2;
	}

	//Arrays
	for ( int i = 0; i <= 19; i++)
	{
		cout<<arrayDeInteiro[i]<<endl;
	}
	*/


	return 0;
}
