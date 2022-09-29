//Programa para criar um map a partir de uma string informada pelo usuário
//Sheyla Cantalupo

#include <map>
#include <iostream>

using namespace std;

int main()
{
    map<char, int> contador;
    string palavra;

    cout << "Texto: ";
    getline(cin, palavra); // armazenamento da frase, incluindo os espaços

    for (auto letra : palavra) //percorre toda a palavra
    {
        if(letra != ' ')contador[letra]++;
    }

   for( pair<char,int> elemento : contador){ 
      cout << elemento.first << ": " << elemento.second << endl; 
 } 


    return 0;
}