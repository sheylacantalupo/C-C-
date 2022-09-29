//Programa para exibir o salário anual de cada empregado
//Sheyla cantalupo

#include <iostream>

using namespace std;

class Empregado{

  private:
    string nome;
    string sobrenome;
    float salario;

  public:
    //padrão sem parâmetro
    Empregado(){
      
      this->nome = "Ana";
      this->sobrenome = "Maria";
      this->salario = 3000.00;
    }
    // três parâmetros
    Empregado(string n, string s, float pagamento){
      this->set_nome(n);
      this->set_sobrenome(s);
      this->set_salario(pagamento);
    }

    void set_nome(string n){
      if(n.size() > 2){
        this->nome = n;
      }else{
        this->nome = " ";
      }
    }

    void set_sobrenome(string s){
      if(s.size() > 3){
        this->sobrenome = s;
      }else{
        this->sobrenome = " ";
      }
    }

    void set_salario(float pagamento){
      if(pagamento >= 0){
        this->salario = pagamento;
      }else{
        //Caso o salário mensal for negativo ajusta para 0
        this->salario = 0;
      }
    }

    string get_nome(){
      return this->nome;
    }

    string get_sobrenome(){
      return this->sobrenome;
    }

    float get_salario(){
      return this->salario;
    }
  
    float salarioAnual(){
      return this->salario*12;
    }

    float salarioPorcentagem(){
      float porcentagem = 10;
      float b = this->salario+(salario/porcentagem);
      return b*12;
    }
    
    string imprimirDados(){
      return nome + " " + sobrenome + "\n" + "Salário Mensal: " + to_string(this->salario) + "\n" + "Salário Anual: " + to_string(this->salarioAnual()) + "\n" + "Salário Anual Ajustado: " + to_string(this->salarioPorcentagem()) + "\n\n";
    }//Imprimir dados do Empregado
};

int main() {
  Empregado empregado;
  Empregado a("Eliz","Linhares",2000);

  cout << empregado.imprimirDados();
  cout << a.imprimirDados();

  cout << empregado.get_nome() << endl;
  cout << empregado.get_sobrenome() << endl;
  cout << a.get_salario() << endl;

  return 0;
}