//Programa para calcular a media e mediana das notas
//Sheyla Cantalupo


#include <iostream>
#include <vector>
using namespace std;


float media(vector<float> notas);
float mediana(vector<float> notas);

int main() {
  
  vector<float> notas;
  float nota;

  cout<<"Digite uma nota:(x para finalizar)"<<endl;

  while(cin>>nota){ //preencher o vector das notas.
     
    notas.push_back(nota);

  } 

  cout<<"Média das notas: " << media(notas)<<endl;

  cout<<"Mediana das notas: " << mediana(notas)<<endl;

  cout<< "Quantidade de notas: "<<notas.size();

}

float media(vector<float> notas){
    
  float soma_notas=0;
  float media;

  for(int i=0; i<notas.size(); i++){ //laço de repetição para somar todas as notas do aluno.
      
    soma_notas= soma_notas + notas[i];    

  }

  media= soma_notas/notas.size();

  return media;
    
}

float mediana(vector<float> notas){

  float mediana;
  int quatidade_notas= notas.size();
  int j,k;

  if(quatidade_notas%2==0){
    
    j= quatidade_notas/2;
    k= (quatidade_notas/2)-1;

    mediana= (notas[j]+notas[k])/2;
   
  }

  else{
  
  j=(quatidade_notas-1)/2;

    mediana= notas[j];

  }

  return mediana;

}



