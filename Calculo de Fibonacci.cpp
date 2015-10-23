#include <iostream>


using namespace std;

int fib (int n)
{
	if(n==0)
	return 0;
	
	if(n==1)
	return 1;
	
	return fib(n-1)+fib(n-2);
			
	
};

int main (){
	
	int n;
	
	while (n>=0)
	
	{
	
		cout<<"Informe um numero para calcular o seu valor pelo calculo de fibonacci: ";
		cin>>n;
	
		if (n<0)
		{	
			
			cout<<"\nEsse numero e negativo, entre com um numero positivo para continuar: ";
			cin>>n;
					
			if (n<0)
			{
		
				cout<<"O numero continua invalido, o programa ira ser fechado.";
				return 1;
										
			}
		}
	
	cout<<"\nO seu numero calculado atraves de Fibonacci e igual a: "<<fib(n);
	cout<<"\n\n";
	
	
	}
	
	return 0;
	
	
}
