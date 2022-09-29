//Programa para calcular a média e situação de 5 alunos
//Sheyla Cantalupo

#include <iostream>
using namespace std;

struct Aluno {
    int matricula;
    string nome;
    float nota[2];
    float media;
    string situacao;
  };

Aluno dados_alunos();//função que vai retornar os dados de um aluno.
void exibir(Aluno aluno);

int main() {
 
  Aluno aluno[5];
  
  for(int i=0; i<5; i++){

    aluno[i]=dados_alunos();//para cada aluno é chamada uma função para preencher os seus dados.
  } 

  for(int i=0; i<5; i++){
    exibir(aluno[i]);//exibindo dados do aluno.
  }

}
Aluno dados_alunos(){
  Aluno aluno;//aluno temporário.
  cout<<"Dados aluno "<<"\nMatricula aluno:";
  cin>>aluno.matricula;

  cout<<"Nome:";
  cin>>aluno.nome;

  cout<<"Nota1:";
  cin>>aluno.nota[0];
  
  cout<<"Nota2:";
  cin>>aluno.nota[1];
  
  aluno.media=(aluno.nota[0]+aluno.nota[1])/2;
  if(aluno.media>=7.0){
    aluno.situacao="Aprovado\n";
  }
  else{
    aluno.situacao="Reprovado\n";
  }

  return aluno;
}
void exibir(Aluno aluno){

  cout<<"Matricula aluno:"<<aluno.matricula<<endl;
  cout<<"Nome do aluno:"<<aluno.nome<<endl;
  cout<<"Média:"<<aluno.media<<endl;
  cout<<"Situação:"<<aluno.situacao<<endl;

}
