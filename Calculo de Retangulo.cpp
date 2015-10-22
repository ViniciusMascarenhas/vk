#include <iostream>

using namespace std;

int main ()
{	
	float a,b;
	
	cout<< "Informe a medida da base do retangulo(cm): ";
	cin>> a;
	cout<<"\nInforme a medida da altura do retangulo(cm): ";
	cin>> b;
	
	cout<<"\nA area do seu retangulo e de: "<<a*b<<"cm2\n";	    
	
	while(a==b)    
	{
		cout<<"\nEsse quadrilatero e um quadrado!\nInforme a medida da base do retangulo(cm): ";
		cin>> a;
		cout<<"\nInforme a medida da altura do retangulo(cm): ";
		cin>> b;
	
		cout<<"\nA area do seu retangulo e de: "<<a*b<<"cm2";
	}
	
	return 0;	    
	
}
