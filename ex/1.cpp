#include <iostream>
#include <cmath>
using namespace std;
 
 int main(){
 	int n;
 	cout << "Iserisi un numero da 1 a 7: " << endl;
 	cin >> n;
 	system("cls");
 	switch(n){
	 	case 1 : cout << "Lunedi" << endl;
	 	break;
	 	case 2 : cout << "Martedi" << endl;
	 	break;
	 	case 3 : cout << "Mercoledi" << endl;
	 	break;
	 	case 4 : cout << "Giovedi" << endl;
	 	break;
	 	case 5 : cout << "Venerdi" << endl;
	 	break;
	 	case 6: cout << "Sabato" << endl;
	 	break;
	 	case 7 : cout << "Domenica" << endl;
	 	break;
	 	default : cout << "Hai sbagliato numerio... Riprova" << endl;
	 	break;
	 }
	 system("pause");
 }
