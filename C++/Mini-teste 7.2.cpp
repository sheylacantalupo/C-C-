//Programa que gera uma aposta da mega-sena
//Sheyla Cantalupo

#include <iostream>
#include <set>

using namespace std;

int main() {

  set <int> num; 
  int numero, i =0;

  auto it = num.find(numero);

  do{
    cout << "Digite um número para formar o jogo(1-60): ";
    cin >> numero;

    it = num.find(numero); //procura o numero dentro do set
    if(numero>=1 && numero<=60){//verifica se o número está entre 1 e 60
      if(it == num.end()){
        num.insert(numero);//se o número não for repetido, será inserido no set
      } else {
        cout << "Número inválido!\n";
        i--;
      }
    }else{
      cout << "O número inserido deve estar entre 1 e 60\n";
      i--;
    }
    i++;
  } while (i<6);

  cout << "\nA sua aposta da mega-sena: \n";
  for (auto jogo: num){
    cout << jogo << "  ";
  }
  
  return 0;
}