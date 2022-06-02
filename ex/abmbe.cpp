#include <iostream>
#include <cmath>
 using namespace std;
 char j = 'v';
 
 int main(){
 	//loop
 	do{
 		int nv = 0, n = 0, r = 0, u = 0;
 		cout << "Quanti voti devi inerire?" << endl;
 		cin >> nv;
 		system("cls");
 		for(int i = 0; i < nv; i++){
 			u++;
 			cout << u << " voto: ";
 			cin >> n;
 			system("cls");
		 	if(n == 5){
		 		r++;
			 }			
	 	}
	 	cout << "Ecco quante volte ha inserito il n.5: ";
	 	cout << r << endl;
	 	system("pause");
	 	system("cls");
	 	cout << "Se vuoi ripetere inserici y: ";
	 	cin >> j;
	 	system("cls");
	 }while(j == 'y');
	 cout << "Exit" << endl;
	 system("pause");
	 system("cls");	 
}
