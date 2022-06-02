#include <iostream>
#include <cmath>
 using namespace std;
 char r;
 
 int main(){
 	//loop
 	for(;;){
 		int n, nv;
 		nv = 1;
 		cout << "inserisci un numero: ";
 		cin >> n;
 		system("cls");
 		cout << "Ecco i primi " << n << " numeri!" << endl;
 		for(int i = 0; i < n; i++){
 		cout << nv << endl;
 		nv = nv + 2;	
	 	}
	 	cout << "Se vuoi uscire inserici y: ";
	 	cin >> r;
	 	if(r == 'y')
		 {
	 		break;
		 }
	 }
	 system("pause");
}
