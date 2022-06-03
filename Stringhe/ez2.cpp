#include <iostream>
using namespace std;

void riordinamento(string, string);

int main(int n, char *s[]) {
  string frase;
  string ordine;
  cout << "Inserisci frase: ";
  getline(cin, frase);
  ordine = frase;
  riordinamento(frase, ordine);
  return 0;
}

void riordinamento(string f, string g) {
  int i = 0;
  while (i != '\0') {
    if(f[i] == '.') {
      g[i] = '\n';
      i++;
    }
    else{
      f[i] = g[i];
      i++;
    }
  }
  cout << "Frase ordinata: " << g << endl;
}
