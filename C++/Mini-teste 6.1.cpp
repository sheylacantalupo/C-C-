//Sheyla Cantalupo
//Programa para  gerar e imprimir um map que contenha números (entre 1 e n) na forma (x, x * x).

#include <iostream>
#include <map>
using namespace std;

int main() 
{
 
 map<int, double> quadrado;

int n;

cout<<"Digite o valor de n: ";
cin>>n;

for(int i=1; i<n+1; i++){


quadrado.insert(pair<int, double>(i,i*i) );

}

cout<<"N="<<n << endl<< "{";

for(int i=1; i<n+1; i++){
  
 cout<< i <<":"<< quadrado[i];

if(i < n) cout << ","; 

}

cout<<"}";

}