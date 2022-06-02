#include <iostream>
#include <cmath>
 using namespace std;
 char r;
 
 int main(){
 	//loop
 	for(;;){
 		int n = 0, nv = 0, tot = 1;
 		cout << "inserisci fino a che numero dispari vuoi somma (il primo numero dispari e' gia' presente! (1)): ";
 		cin >> n;
 		system("cls");
 		for(int i = 0; i < n; i++){	
 			nv = 1;
 			nv = nv + 2;
 			tot = tot+nv;		
	 	}
	 	cout << "Ecco il totale:" << endl;
	 	cout << tot << endl;
	 	cout << "Se vuoi uscire inserici y: ";
	 	cin >> r;
	 	if(r == 'y')
		 {
	 		break;
		 }
	 }
	 system("pause");
	 
}
