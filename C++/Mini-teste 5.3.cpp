//Programa para armazenar uma quantidade indefinida de alunos e mostrar ao final os alunos ordenados pela média. 
//Sheyla Cantalupo

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Aluno{

 string nome;
 float media;
 long int matricula;

};

bool medias(Aluno a, Aluno b);// função para deixar as médias em ordem crescente.

int main(){
 
 Aluno aluno;
 vector <Aluno> dados;
 char pergunta;

 do{

    pergunta='S';

    cout << "Nome: ";
    cin >> aluno.nome;
     
    cout << "Média: ";
    cin >> aluno.media;
      
    cout << "Matricula: ";
    cin >> aluno.matricula;

      
    cout << "Informar mais um aluno S/N: ";
    cin >> pergunta;
      
    dados.push_back(aluno);//após coletar os dados do aluno temporário, será armazenado no vector: dados.
      
    }while(pergunta != 'N');  

 sort(dados.begin(),dados.end(),medias);

 cout<<endl<<endl;

  for(Aluno a : dados) { //imprimir os dados da tumrma em ordem crescente.

    cout << a.nome;
    cout<< ": Matrícula ";
    cout<< a.matricula<<endl;
    cout<< "    Média: ";
    cout<< a.media<<endl;
   }   

return 0;
  
}

bool medias(Aluno a, Aluno b){

  return a.media < b.media;

}
