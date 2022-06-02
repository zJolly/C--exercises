#include<iostream>
using namespace std;

int *p, n;

int main(){
	cin >> n;
	n = n+1;
	cout << n << endl;
	p = &n;
	//Puntatore p prende valore dell'indirizzo della memoria della variabile n
	cout << p << endl;
	//Fa vedere il contenuto dell indirizzo di p
	cout << *p << endl;
	p= 03223;
}
