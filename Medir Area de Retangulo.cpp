// construa um algoritmo capaz de calcular o consumo medio de combustivel de um veiculo
//para isso o usuario devera informar como entrada os KMs percorridos pelo veiculo e o total de litros usados para abastaecer 

#include <iostream>

using namespace std;

     int main (){
     
     float combustivel,km;
     
     cout << "Quantos km o carro percorreu ?  ";
     cin >> km;
     cout << "quantos litros de combustivel foram abastecidos?  ";
     cin >> combustivel;
     
     cout<< "\n";
     
     cout<< "O consumo medio de gasolina do seu carro e de:  " << km/combustivel;
     cout<< "\n";
     
     system("pause");


}



