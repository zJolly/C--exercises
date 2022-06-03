#include <iostream>
using namespace std;

int main(int n, char *s[]) {
  string str;
  cout << "Immetti frase: ";
  getline(cin, str);
  char * uppercase(char * str);
  //char * lowercase(char * str);
  for(int i = 0; str[i] != '\0'; i++) {
    if((str[i] >= 'a')&&(str[i] <= 'z')){
    str[i]-=32;
    }
  }
  cout << "Frase ordinata: " << str << endl;
  return 0;
}
