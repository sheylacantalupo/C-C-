//Programa para indicar o menor número de um vetor e sua posição
//Sheyla Cantalupo

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



void menor_numero(vector<double> numero);


int main(){


  double x;
  vector<double> numero;
    
    
  cout << "Informe o numero (x para sair): ";
    
  while(cin >> x){
    numero.push_back(x);
        
    cout << "Informe o numero: ";
   }
    menor_numero(numero);

    return 0;
}

void menor_numero(vector<double> numero){
  int posicao;
  int menor = numero[0];  

  for(int i=0; i < numero.size();i++)	{ //a condição do for é o tamanho de vetor
    if(numero[i] < menor){
      menor=numero[i];//o menor número recebe o valor na posição i
      posicao=i;
    }
  }
  cout <<"O menor número é: "<< menor<<endl;
  cout <<"A posição do menor número é: "<< posicao<<endl;
}