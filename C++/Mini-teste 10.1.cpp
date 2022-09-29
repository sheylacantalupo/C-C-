//Sheyla cantalupo

#include <iostream>

using namespace std;

class Data{
  private:
    int dia;
    int mes;
    int ano;

  public:
    // padrão sem parâmetro
    Data(){
      this->dia = 1;
      this->mes = 1;
      this->ano = 1970;
    }
    //Construtor com dois parâmetros
    Data(int d, int m){
      this->set_dia(d);
      this->set_mes(m);
      this->ano = 1970;
    }
    // três parâmetros
    Data(int d, int m, int a){
      this->set_dia(d);
      this->set_mes(m);
      this->set_ano(a);
    }

    void set_dia(int d){
      if(d>0 and d<=31){
        this->dia = d;
      }else{
        this->dia = 1;
      }
    }

    void set_mes(int m){
      if(m>0 and m<=12){
        this->mes = m;
      }else{
        this->mes = 1;
      }
    }

    void set_ano(int a){
      if(a>0){
        this->ano = a;
      }else{
        this->ano = 1970;
      }
    }

    int get_dia(){
      return this->dia;
    }

    int get_mes(){
      return this->mes;
    }

    int get_ano(){
      return this->ano;
    }
    //Método para mostrar a data separada por barras
    string mostrarData(){
      return to_string(this->dia) + "/" + to_string(this->mes) + "/" + to_string(this->ano) + "\n";
    }
    

};

int main() {
  
  Data data;
  Data dataDM(3,3);
  Data dataDMA(4,4,556);

  cout << data.mostrarData();
  cout << dataDM.mostrarData();
  cout << dataDMA.mostrarData();

  cout << "\n"<<data.get_dia() << endl;
  cout << "\n"<<dataDM.get_mes() << endl;
  cout << "\n"<<dataDMA.get_ano() << endl;

  return 0;
}