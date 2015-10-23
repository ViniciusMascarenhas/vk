#include <stdio.h>		// Para printf e scanf.
#include <iostream>		// Para std::cout e std::cin.
using namespace std;	// Para não precisar digitar std:: toda vez que for usar cout e cin.

/*
 Um laboratório de desenvolvimento de jogos solicitou um algoritimo de classificação de performance para um determinado jogo. 
 O algoritimo deverá classificar os jogadores de acordo com a tabela abaixo, sendo que performance é calculada pela experiência acumulada pelo jogador dividida pelo número de vezes que jogou. 
 O algoritimo deve solicitar o nível de experiência e a quantidade de vezes que o jogador jogou. 
 De acordo com a tabela abaixo, o algoritimo mostra a classificação e pergunta se existem mais jogadores para classificar. 
 O programa irá ficar no "laço" até que a resposta seja negativa.
 
 0 a 500	(iniciante)
 501 a 2500	(normal)
 > 2500		(experiente)
 */


int main ()
{
	float exp, perf;
	int vj;
	char opcao = 's';
	
	while (opcao == 's')
	{	
		cout<< "\nInforme a experiencia do seu personagem (exp):   ";
		cin>>exp;
		cout<<"\nInforme a quantidade de vezes jogadas:  ";
		cin>>vj;
	
		perf=exp/vj;
	
		cout<< "\nSua performance nesse jogo e de: "<<perf;
	
		if (perf<=500 && perf>=0)
			cout<<"\nVoce e apenas um iniciante!\n\n";
	
		else if (perf<=2500)
			cout<<"\nMuito bom, voce e esta caminhando para se tornar um jogador experiente!\n\n";
	
		else
		cout<<"\nWOOOW voce e um jogador muito experiente, parabens!\n\n";
	
	
		cout<<"\nDeseja saber outro nivel do seu personagem (s/n)?  ";
		cin>>opcao;
	}
 
	
		
	return 0;
}

