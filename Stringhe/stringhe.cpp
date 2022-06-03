#include <iostream>
using namespace std;

int main(int n, char *s[]) {
  string s1;
  string s2 = "Nicolas Zoratto";
  cout << "S1: ";
  //cin >> s1;
  getline(cin, s1);
  cout << "S1 vale: " << s1 << endl;
  cout << "S2 vale: " << s2 << endl;

  cout << "Lunghezza S1: ";
  cout << s1.length() << endl;
  cout << "Lunghezza S2: ";
  cout << s2.size() << endl;

  cout << "1° elemento di S2: ";
  cout << s2[0] << endl;
  s2[1]='v';
  cout << "S2 modificata: ";
  cout << s2 << endl;

  if (s1.compare(s2) == 0) {
    cout << "SONO UGUALI" << endl;
  }
  else{
    cout << "SONO DIVERSI" << endl;
  }
  //== 0 (s1 = s2)
  //< 0 (s1 < s2)
  //> 0 (s1 > s2)
  cout << "S1 è stato pulito: !";
  s1.clear();
  cout << s1 << "!" << endl;

  while (s2[i] != '\0') {
    cout << "Elemento: " << s2[i];
    cout << endl;
    i++;
  }



  return 0;
}
