#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
	
	int x;
	char texto[999];
	
	cout<<"Escreve o texto a ser criptografado: ";
	cin>>texto;
	
	for(x=0;texto[x]!='\0';x++)
	
		texto[x]=x+3;
		
	cout<<"\nSeu texto criptografado e esse-> "<<texto;
	
								
				
	return 0;
	
}


