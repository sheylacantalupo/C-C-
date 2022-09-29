//Programa para calcular o quadrado de um número
//Sheyla Cantalupo

#include <iostream>
#include <math.h>

using namespace std;

void quadrado(int *valor);

int main (){
 int resultado,numero;

  cout<<"Insira um número:";
  cin>>numero; 
  quadrado(&numero);//função quadrado
   return 0;
}

void quadrado(int *valor){

 int resultado;

resultado = pow(*valor,2);//Resultado recebe o valor e eleva o mesmo ao quadrado
cout<<resultado;
}