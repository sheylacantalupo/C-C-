//Programa para armazenar strings que parar quando o usuário digita uma palavra repetida
//Sheyla cantalupo

#include <iostream>
#include <set>
using namespace std;

int main() {

  set <string> palavra; 
  
  string nome;

  auto it = palavra.find(nome);

  do{
    cout << "Digite uma palavra: ";
    cin >> nome;

    it = palavra.find(nome); //testa se a palavra já existe no set "palavra"

    if(it==palavra.end()){
      palavra.insert(nome);
    }

  } while (it==palavra.end());

  cout << "\nPalavras:\n";
  for (string lista : palavra){ //imprimir toda a lista de palavras
    cout << lista << endl;
  }

  return 0; 
}