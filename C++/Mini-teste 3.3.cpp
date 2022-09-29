//Programa para calcular a diferença de dias
//Sheyla Cantalupo

#include <iostream>
using namespace std;

struct Data{
   int dia;
   int mes;
   int ano;
};

int diasEntreDatas(Data a, Data b);
bool compararDatas(Data x, Data y);
int diasDoMes(Data m);
bool ehBissexto(Data x);

int main(){

   int resultado;
   Data inicio ;
   Data final;
    
    cout << "Logo abaixo digite duas datas para saber a diferença de dias entre elas" << endl;
    cout << "Digite a primeira data: " << endl;
    cout << "Dia: ";
    cin >> inicio.dia;
    cout << "Mes: ";
    cin >> inicio.mes;
    cout << "Ano: ";
    cin >> inicio.ano;

    cout << "\nDigite a segunda data: ";
    cout << "\nDia: ";
    cin >> final.dia;
    cout << "Mes: ";
    cin >> final.mes;
    cout << "Ano: ";
    cin >> final.ano;
   
    resultado = diasEntreDatas(inicio,final);

    cout << "A quantidade de dias entre as datas é de "<< resultado <<" dias" << endl;
    
    return 0;
}

int diasEntreDatas(Data a, Data b){
   int contador = 0;
   while(compararDatas(a,b) == false){
       contador++;
       a.dia++;
       if(a.dia > diasDoMes(a)){
           a.mes++;
           a.dia = 1;
           if(a.mes > 12){
               a.ano++;
               a.mes = 1;
           }
       }
   }
   return contador;
}

bool compararDatas(Data x, Data y){
   if (x.dia == y.dia && x.mes == y.mes && x.ano == y.ano)
   {
       return true;
   }else{
       return false;
   }   
}

int diasDoMes(Data m){
   int meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
   if(ehBissexto(m) == true){
       meses[1] = 29;
   }
   return meses[m.mes-1];
}

bool ehBissexto(Data x){

    if (x.ano % 4 == 0 && x.ano %100 != 0 && x.ano % 400 != 0 )
    {
        return true;
    }else{
        return false;
    }
      
}