//Programa para salvar os dsdos de alunos em um arquivo .csv
//Sheyla Cantalupo

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ofstream arquivo; //arquivo de saída de dados

  string nome;
  string curso;
  float CRE;
  char resposta='s';

  arquivo.open("Dados_alunos.csv", ios::app); //arquivo onde os dados serão armazenados
  
  if(arquivo.is_open()){
    do{
      
      cout << "Nome completo:  ";
      getline(cin, nome);
      cout << "Curso: ";
      getline(cin, curso);
      cout << "CRE: ";
      cin >> CRE;
      arquivo << "\nAluno: " << nome << "," << "\nCurso: " << curso << "," << "\nCRE: " << CRE <<endl;
      cout << "Deseja insirir mais um aluno (s/n)? ";
      cin >> resposta;
      cin.ignore();

    }while(resposta == 's');
  }
  return 0;
}