#include <iostream>

using namespace std;

int main ()
{	

	float lado[3];
	int cont;
	
	
	cout<< "Informe a medida da base do triangulo:  ";
	cin>>lado[0];
	cout<< "Informe a medida do lado 1 do triangulo:  ";
	cin>>lado[1];
	cout<< "Informe a medida do lado 2 do triangulo:  ";
	cin>>lado[2];
	
	cont=0;
	
	if (lado[0]==lado[1])
		cont = cont + 1;
		
	if (lado[0]==lado[2])
		cont = cont + 1;
		
	if (lado[1]==lado[2])
		cont = cont + 1;
		
	if (cont==0)
		cout<< "O seu triangulo e escaleno";
	if (cont==1)
	    cout<< "o seu triangulo e isosceles";
	if (cont==3)		
  	    cout<< "o seu triangulo e equilatero";
  	    
  	    return 0;
  	    
	

}

/*

Se um triângulo não tem nenhum lado igual a outro (0 igualdades), é escaleno.
Se um triângulo tem dois lados iguais (1 igualdade), é isósceles.
Se um triângulo tem três lados iguais (3 igualdades), é equilátero.

*/
