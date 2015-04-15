#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

 int _tmain(int argc, _TCHAR* argv[]) 
{
		int nr;
		do
		{
				cout <<"Digite um numero (0 para finalizar): ";
				cin >> nr;
				cin.ignore ();
				if (nr%2==0)
            /* se nr for divisivel por 2
               (O resto da divisão por 2 for 0)*/
            cout <<"Este numero e par\n";
        else
            cout <<"Este numero e impar\n";
        system ("pause");
				system ("cls");
		} while (nr!=0); //enquanto nr for diferente de 0
		return 0;
}
