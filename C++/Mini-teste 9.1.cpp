//Sheyla cantalupo

#include <iostream>
#include <vector>

using namespace std;

class aluno{
private:

vector <double> notas;
double media;

void nova_media(){
double soma;
for(double temp : this->notas ){
  soma += temp;
}
this -> media = soma / this->notas.size();

}

public:

string nome;
long int matricula;

void inserir_notas(double nota){
  if(nota >= 0 and nota <= 100 and this-> notas.size() < 3){
    this->notas.push_back(nota);
    void nova_media();
  }
}

string csv(){
  return  nome + ", " + to_string(matricula) + ", " + to_string(media);
}

};

int main() {

aluno dados;
string resp;
double nota;
int i=1;

cout << "Nome do aluno: ";
getline(cin,dados.nome);
cout << "Matricula:";
cin >> dados.matricula;

do{

 cout << i << "º nota: " << endl;
 cin >> nota;
 dados.inserir_notas(nota);
 
 cout << "Inserir mais notas? s/n (até 3 notas): ";
 cin >> resp;
 i++;
 
}while(resp == "s");

cout << "\n";

cout << dados.csv() << endl;

}