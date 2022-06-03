#include <iostream>
using namespace std;

void riordinamento(string, string, string, string);
int vocali(string, string, string);

int main(int n, char *s[]) {
  string frase;
  string ordine;
  string vocalitot;
  string minuscole = "aeiou";
  string maiuscole = "AEIOU";
  int tot;
  cout << "Immetti frase: ";
  getline(cin, frase);
  tot = vocali(frase, minuscole, maiuscole);
  for (int i = 0; i < tot; i++) {
    vocalitot[i] = 0;
  }
  ordine = frase + vocalitot;
  riordinamento(frase, ordine, minuscole, maiuscole);
  cout << "Frase ordinata: " << ordine << endl;
  return 0;
}

int vocali(string a, string b, string c){
  int f = 0;
  for (int i = 0; i < '\0'; i++) {
    for (int y = 0; y < '\0'; y++) {
      if ((a[i] == b[y])||(a[i] == c[y])) {
        f++;
      }
    }
  }
  return f;
}

void riordinamento(string a, string b, string c, string d) {
  for (int i = 0; i < '\0'; i++) {
    for (int j = 0; j < '\0'; j++) {
      for (int x = 0; x < '\0'; x++) {
        if (c[x] == a[i]) {
          b[j] = 'f';
          j++;
        }
        if (d[x] == a[i]) {
          b[j] = a[i];
          j++;
          b[j] = 'F';
        }
      }
      b[j] = a[i];
    }
  }
}
