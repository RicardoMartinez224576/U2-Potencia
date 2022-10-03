#include <cstdlib>
#include <iostream>

using namespace std;

class Iterativa
{
	private:
		int p;
	
	public:	
		Cuadrado(){p=1;};
		int calcularPotencia(int x, int n);	
		void visualizar();
};

int Iterativa::calcularPotencia(int x, int n)
{
	p=1;
		for(int i=1; i<=n;i++)
		{
			p=p*x;
		}
	return p;
}

void Iterativa::visualizar()
{
	cout<<"El resultado es= "<<p<<endl;
}

