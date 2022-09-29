//Sheyla Cantalupo

#include <iostream>

using namespace std;

class Conta{

private:

double saldo = 0;

public:
long int agencia;
long int conta;
string nome;

void inserirDinheiro(double dinheiro){
  saldo = dinheiro;
}

void Fazer_Deposito(double deposito){
  this -> saldo += deposito;
}

void set_saldo(double saldo){
  this->saldo = saldo;
}


void Fazer_Saque(double retirada){
if(retirada <= saldo){
  this -> saldo -= retirada;
}else{
  cout << "Saldo insuficiente! \n ";
}

}

void Mostrar_Saldo(){
        cout << "\nSaldo atual R$ " << saldo << endl;
    }

  string Mostrar(){
      return "Cliente: " + nome + ", Conta: " + to_string(conta) + ", Agencia: " + to_string(agencia);
    }


};

int main() { 

 double temp;
 double tmp2;
 Conta conta01,conta02;
 double saque,depositos;
 string sair;

cout << "\n\nCliente 01 informe seus dados: \n\n";

cout << "Conta: ";
cin >> conta01.conta;
cout << "Agencia: ";
cin >> conta01.agencia;
cout << "Nome do titular: ";
cin >> conta01.nome;
cout <<"Saldo inicial:" ;
cin >> tmp2;
conta01.inserirDinheiro(tmp2);

 cout << "deseja fazer um saque na conta 01 (s/n)?";
    cin >> sair;
    if(sair == "n"){ }
    else{
      cout << "Informe o valor do saque: ";
      cin >> saque;
      conta01.Fazer_Saque(saque);
    }
    cout << "Deseja fazer um deposito na conta 01 s/n? ";
    cin >> sair;
    if(sair == "n"){ }
    else{
     cout << "Valor do depósito: ";
     cin >> depositos;
     conta01.Fazer_Deposito(depositos);
   
    }

  cout << "\n\nCliente 02 informe seus dados: \n\n";

  cout << "Informe a conta: ";
  cin >> conta02.conta;
  cout << "Informe a agencia: ";
  cin >> conta02.agencia;
  cout << "Informe seu nome: ";
  cin >> conta02.nome;

    cout << "Deseja fazer um saque na conta 02 s/n?";
    cin >> sair;
    if(sair == "n"){ }
    else{
      cout << "Informe o valor do saque: ";
      cin >> saque;
      conta02.Fazer_Saque(saque);
    }
    cout << "Deseja fazer um deposito na conta 02 s/n? ";
    cin >> sair;
    if(sair == "n"){ }
    else{
     cout << "Informe o valor do deposito: ";
     cin >> depositos;
     conta02.Fazer_Deposito(depositos);
    }

  
  cout << "\n Dados da Conta 01: \n\n";
 
  cout << conta01.Mostrar() << endl;
  conta01.Mostrar_Saldo();
  
  cout << "\nDados da Conta 02: \n\n";
  
  cout << conta02.Mostrar() << endl;
  conta02.Mostrar_Saldo(); 

}