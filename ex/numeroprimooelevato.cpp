#include <iostream>
#include <cmath>
 using namespace std;
 
 int main(){
 	int n, som, res;
 	cout << "Inserisci un mumero: ";
 	cin >> n;
 	for(;;){
 		int i = 0;
 		res = n/i;
 		if(res == 1){
 			cout << "E' un numero primo!" << endl;
 			break;
		 }
		 if(res == n){
 			cout << "Non e' un numero primo!" << endl;
 			break;
		 }
		 i++;
		 
	 }
	 system("pause");
 }
 
