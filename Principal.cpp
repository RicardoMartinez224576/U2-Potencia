#include "Recursividad.h"
#include "Iterativa.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char * arg[])
{
	int b,e,opc,s=0;
	Recursividad R;
	Iterativa I;
	do
	{
	system("Cls");
	cout<<"Programa para calcular Potencia"<<endl;
	cout<<"Ingresa la base"<<endl;
	cin>>b;
	cout<<"Ingresa el exponente"<<endl;
	cin>>e;
	cout<<"De que manera desea calcularlo?\n1.Recursividad \n2.Iterativa"<<endl;
	cin>>opc;
	switch(opc)
	{
		case 1:
				cout<<"Recursividad"<<endl;
				R.calcularPotencia(b,e);
				R.visualizar();
			break;
		case 2: 
				cout<<"Iterativa"<<endl;
				I.calcularPotencia(b,e);
				I.visualizar();
			break;
		default: cout<<"Ingrese un valor correcto"<<endl;
	}
	cout<<"Desea calcular otro numero   Si=1        No=cualquier numero"<<endl;
	cin>>s;
	}while(s==1);
	getchar();
	system("pause");
	return 0;
}
