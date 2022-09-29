//Programa para retornar TRUE/FALSE
//Sheyla Cantalupo 
#include <iostream>
using namespace std;

int criancasSorrindo(bool mariaSorrindo,bool joaoSorrindo, int x);

int main() {
  bool mariaSorrindo,joaoSorrindo;
  
  cout<<"Digite 1 se Maria está sorrindo ou 0 se não estiver:";
  cin>> mariaSorrindo;

  cout<<"Digite 1 se João está sorrindo ou 0 se não estiver:";
  cin>> joaoSorrindo;

  int x= criancasSorrindo( mariaSorrindo, joaoSorrindo,x);
  
  if(x==1){//condição para a saída true ou false 
  cout<<"True";
  }
  else{
  cout<<"False";
  }
  }
int criancasSorrindo(bool mariaSorrindo,bool joaoSorrindo, int x){

 if(mariaSorrindo==joaoSorrindo){//comparação dos valores booleanos 
   return x=1;//atribuir valor 1 se a condição for verdadeira
 }
 else{
   return x=0;//atribuir valor 1 se a condição for falsa
 }
 }