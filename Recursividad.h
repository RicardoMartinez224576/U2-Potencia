#include <cstdlib>
#include <iostream>

using namespace std;

class Recursividad
{
	private:
		int p;
	
	public:	
		Cuadrado(){p=0;};
		int calcularPotencia(int x, int n);	
		void visualizar();
};

int Recursividad::calcularPotencia(int x, int n)
{
	if(n==0)
	{
	return p=1;
	}
	else
	{
	return p=x*calcularPotencia(x,n-1);
	}
}

void Recursividad::visualizar()
{
	cout<<"El resultado es= "<<p<<endl;
}

