//Programa para armazenar, listar e pesquisar pessoas
//Sheyla Cantalupo


#include <iostream>
#include <set>

using namespace std;

struct Pessoa{ //dados da pessoa
  string nome;
  string sobrenome;
  int idade;
  long int cpf;
};
//retorna o menor cpf
bool operator < (Pessoa a, Pessoa b){
  return a.cpf < b.cpf;
}
//retorna caso tenha um cpf igual ao inserido
bool operator == (Pessoa c, Pessoa d){
  return c.cpf == d.cpf;
}

int main(){

  Pessoa armazenar;
  char resposta, pesquisar;
  set <Pessoa> ordenar;
  long int cpf_pesquisa;

  do{

    cout << "Nome e sobrenome: ";
    cin >> armazenar.nome >> armazenar.sobrenome;
    cout << "Idade: ";
    cin >> armazenar.idade;
    cout << "CPF: ";
    cin >> armazenar.cpf;
    ordenar.insert(armazenar);
    cout << "Deseja inserir outra pessoa (s/n)? ";
    cin >> resposta;

  } while (resposta == 's');

  cout << "Deseja pesquisar uma pessoa (s/n)?";
  cin >> pesquisar;
  if(pesquisar == 's'){
    cout << "CPF da pessoa: ";
    cin >> armazenar.cpf;
    auto it = ordenar.find(armazenar);
    if(it != ordenar.end()){
      cout << it -> nome << " " << it -> sobrenome << endl;
      cout << "Idade: " << it -> idade << " CPF: " << it -> cpf;
    } else {
      cout << "Inexistente" << endl;
    }
  } else {
    for (Pessoa a : ordenar){
    cout << "\n" << a.nome << " " << a.sobrenome << endl;
    cout << "Idade: " << a.idade << " CPF: " << a.cpf <<"\n";
    }
  }

  return 0;
}