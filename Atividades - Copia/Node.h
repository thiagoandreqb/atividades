//---------------------------------------------------------------------------

#ifndef NodeH
#define NodeH
//---------------------------------------------------------------------------
#include <vcl.h>
#include <vector>

class Node
{
	private:
		int a;
		std::vector<int> listaInt;

	protected:
		int c;

	public:
		int b;

		void addInt(int);
		int tamInt();
		int lerInt(int);


		Node();
		Node(int a);
		Node(int a, int b);
		void calcularQuadrado();
		String getAStr();
		String getBStr();
		String getCStr();

		inline int getA(){ return a; }
		inline void setA(int a){ this->a = a; }

		inline int getB(){ return b; }
		inline void setB(int b){ this->b = b; }

		inline int getC(){ return c; }
		inline void setC(int c){ this->c = c; }


		void minhaClasse();
};

#endif
