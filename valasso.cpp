#include<iostream>
using namespace std;
//Dichiarazione dei prototipi
int validaNumero();
int valAssoluto(int);

int main(){
  //Dichiarazione variabili
  int n=0;

  //Chiamata del sottoprogramma
  n=validaNumero();
  n=valAssoluto(n);

  cout <<"Il valore assoluto è: " << n <<endl;
  return 0;
}

  //Definizione dell implementazione
  int validaNumero(){
    int n;
    do{
      system("clear");
      cout<<"Inserisci un numero minore di 0: ";
      cin >> n;
    }while(n > 0);
    return n;
  }
  int valAssoluto(int n){
    n=-n;
    return n;
  }
