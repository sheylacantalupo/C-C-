//Sheyla Cantalupo
//Lista telefonica

#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {

  string nome, numero;

  map <string, string> lista;

  do{
    cout << "Nome: (ou 'sair' para imprimir uma lista e sair): ";
    cin >> nome;

    if(nome!="sair"){

      auto it = lista.find(nome); //verifica se o nome já existe no map
      if(it != lista.end()){
        //exite o número fererente ao nome que já existe no map
        cout << "O numero de telefone deste contato é: " << it -> second << endl;
      }
      else{
        cout << "Número: ";
        cin >> numero;
      }

    }

    lista.insert(pair<string, string>(nome, numero));

  } while (nome != "sair");

  if(nome=="sair"){
    for(pair<string, string> atual: lista){
      lista.erase("sair");
      cout << atual.first << ": " << atual.second << endl;
    }
  }
  return 0;
}