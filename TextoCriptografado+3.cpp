#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{
	
	int x;
	char texto[999];

	cout<<"Escreve o texto a ser criptografado: ";
	cin>>texto;
	
	
	for(x=0; texto[x]!='\0'; x++)
	{
		texto[x]=texto[x]+3;
	};
		
	cout<<"\nSeu texto criptografado e esse:\n"<<texto<<"\n\n";
	
								
				
	return 0;
	
}


