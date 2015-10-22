#include <iostream>

using namespace std;

int main ()
{	
	float a,b;
	
	do
	{
		cout<<"\nInforme a medida da base do retangulo(cm): ";
		cin>> a;
		cout<<"\nInforme a medida da altura do retangulo(cm): ";
		cin>> b;
	
		cout<<"\nA area do seu retangulo e de: "<<a*b<<"cm2";
		
		if (a==b) cout << "Esse quadrilatero e um quadrado!\n";
	}
	while(a==b);    
	
	
	return 0;	    
	
}
