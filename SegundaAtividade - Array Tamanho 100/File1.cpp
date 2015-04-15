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
	const int TAMANHO_DO_ARRAY = 100;
	//Arrays e Laços
	int arrayDeInteiro[TAMANHO_DO_ARRAY];
	arrayDeInteiro[0] = 2;
	arrayDeInteiro[1] = 4;
	arrayDeInteiro[2] = 6;
	arrayDeInteiro[3] = 8;
	arrayDeInteiro[4] = 10;

	/*
	for(inicializacao da var; condicao de parada; incremento)
	{

	}
	*/
	for( int i = 5; i < 100; ++i)
	{
		arrayDeInteiro[i] = arrayDeInteiro[i-1] + 2;
	}

	//Arrays
	for ( int i = 0; i <= 99; i++)
	{
		cout<<arrayDeInteiro[i]<<endl;
	}


	return 0;
}
