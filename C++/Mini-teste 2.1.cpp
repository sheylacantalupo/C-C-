//Programa para somar floats
//Sheyla Cantalupo 
#include <iostream>
using namespace std;

float somaDeFloats(float a, float b);

int main() {
    float a, b;
    
    cout << "insira o valor de a:";
    cin >> a;
    cout << "insira o valor de b:";
    cin >> b;

    float soma= somaDeFloats(a,b);

    cout << "Soma="<< soma;
}

float somaDeFloats(float a,float b){
  if(a==b){
   return 2*(a+b);//se os dois valores forem iguais então ela deve retornar duas vezes a soma deles
  }
  else{
  return a+b;
  }
}