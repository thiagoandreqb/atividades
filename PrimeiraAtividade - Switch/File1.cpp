#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <iostream>
#include <stdlib.h>

using namespace std;

 int _tmain(int argc, _TCHAR* argv[])
{
	const int CANDIDATO_A=1,CANDIDATO_B=2,CANDIDATO_C=3, CANDIDATO_D=0, CANDIDATO_E=9;
	int VARIAVEL_ALTERNATIVA;
	int variavel=random(4);
	srand (time(NULL));
	int valor = rand();
	cout<<"Escolha seu candidato de acordo com as opcoes:"<<endl;
			cout<<"PT: 1"<<endl;
			cout<<"PSDB: 2"<<endl;
			cout<<"PSB: 3"<<endl;
			cout<<"NULO: 0"<<endl;
			cout<<"BRANCO: 9"<<endl;
			cout<<"Digite seu voto?";
			cin>>VARIAVEL_ALTERNATIVA;
	if (VARIAVEL_ALTERNATIVA == 9) {
		VARIAVEL_ALTERNATIVA = variavel;
	}

	switch(VARIAVEL_ALTERNATIVA, variavel)
	{
		case CANDIDATO_A:
			cout<<"CANDIDATO_PT";
		break;

		case CANDIDATO_B:
			cout<<"CANDIDATO_PSDB";
		break;

		case CANDIDATO_C:
			cout<<"CANDIDATO_PSB";
		break;

		case CANDIDATO_D:
			cout<<"NULO";
		break;
		{
		case CANDIDATO_E:
		   cout<<"";
		}
		break;

		default://VOTO NULO/OU BRANCO
			cout<<"VOTO INVALIDO";
		break;
	}


	return 0;
}

