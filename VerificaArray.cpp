#include <iostream>
#define mas 14
using namespace std;
void caricamento(int[]);
void caricamentocasuale(int[]);
void stampa(int[]);
void stampax(int[]);
int scommettitore(int[], int[]);
void caricacsu(int[]);
void confronto(int[], int[], int[]);


int main() {
  int vet1[mas],cas1[mas],cas2[mas],cas3[mas],punti,fin[mas];
  caricamento(vet1);
  cout << "Risultati della settimana:" << endl;
  stampax(vet1);
  caricamentocasuale(cas1);
  cout << "Tua giocata:" << endl;
  stampax(cas1);
  punti = scommettitore(vet1, cas1);
  cout << "Sto controllando la schedina giocata:" << endl;
  cout << "Hai totalizzato " << punti << " punti" << endl;
  if (punti == 14) {
    cout << "Hai vinto, sei stato molto fortunato!" << endl;
  }
  else{
    cout << "Non hai vinto ritenta la prossima settimana..." << endl;
  }
  caricacsu(cas2);
  cout << "Goal fatti in casa:" << endl;
  stampax(cas2);
  caricacsu(cas3);
  cout << "Goal fatti in trasferta:" << endl;
  stampax(cas3);
  confronto(cas2, cas3 , fin);
  cout << "Colonna vincente:" << endl;
  stampax(fin);
  return 0;
}

void caricamento(int x[]) {
  for (int i = 0; i < mas; i++) {
    do{
      cout << "Partita vinta(1)/pareggiata(0)/persa(2):";
      cin >> x[i];
    } while((x[i] < -1) || (x[i] > 3));
  }
}

void caricamentocasuale(int x[]) {
    int numcas;
    srand(time(0));
    for (int i = 0; i < mas; i++) {
      numcas = 0+rand()%3;
      x[i] = numcas;
  }
}



void stampax(int x[]) {
  for (int i = 0; i < mas; i++) {
    if (x[i == 0]) {
    cout << "0" << endl;
  }
  else {
    cout << x[i] << endl;
  }
}
}

int scommettitore(int x[],int y[]) {
  int tot = 0;
  for (int i = 0; i < mas; i++) {
    if(x[i] == x[i]) {
      tot = tot + 1;
    }
  }
  return tot;
}

void caricacsu(int x[]) {
    int numcas;
    srand(time(0));
    for (int i = 0; i < mas; i++) {
      numcas = 0+rand()%6;
      x[i] = numcas;
  }
}


void confronto(int x[], int y[],int j[]) {
  for (int i = 0; i < mas; i++) {
    if(x[i] == y[i]) {
      j[i] = 0;
    }
    else {
      if (x[i] > y[i]) {
        j[i] = 1;
      }
      else {
        j[i] = 2;
      }
    }
  }
}
