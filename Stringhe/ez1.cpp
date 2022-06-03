#include <iostream>
using namespace std;

int conteggio(string, string);
void occorenze(string, string, int []);

int main(int n, char *s[]) {
  string frase;
  string vocali = "aeiouAEIOU";
  string consonanti = "BCDFGHLMNPQRSTVZbcdfghlmnpqrstvz";
  string alfabeto = "ABCDEFGHILMNOPQRSTUVZabcdefghilmnopqrstuvz";
  int conta[42] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  cout << "Inserisci frase: ";
  //cin >> frase;
  getline(cin, frase);
  cout << "Numero vocali: " << conteggio(frase, vocali) << endl;
  cout << "Numero consonanti: " << conteggio(frase, consonanti) << endl;
  occorenze(frase, alfabeto, conta);
  for (int i = 0; i < 42; i++) {
    cout << alfabeto[i] << ": " << conta[i] << "\t";
  }
  cout << endl;
  return 0;
}

int conteggio(string f, string v) {
  int c, i, j;
  c = 0;
  i = 0;
  while (f[i] != '\0') {
    j = 0;
    while (v[j] != '\0') {
      if (f[i] == v[j]) {
        c++;
      }
      j++;
    }
    i++;
  }
  return c;
}

void occorenze(string f, string a, int v[]) {
  int i, j;
  i = 0;
  while (f[i] != '\0') {
    j = 0;
    while (a[j] != '\0') {
      if (f[i] == a[j]) {
        v[j]++;
      }
      j++;
    }
    i++;
  }
}
