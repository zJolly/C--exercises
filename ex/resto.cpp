#include <iostream>
#include <cmath>
 using namespace std;
 
int semp(int, int);
 
 int main(){
 	int n,d,f;
 	
 	cout << "Insersici numeratore:";
 	cin >> n;
 	cout << "Insersici denominatore:";
 	cin >> d;
 	system("cls");
 	f=semp(n,d);
	 if(f==1){
	 	cout << "E' divisibile!!!" << endl;
	 }
	 else{
	 	cout << "Non e' divisibile!!!" << endl;
	 }
 }
 
int semp(int k, int l){
 	int j,x;
 	if(k > l){
 		for(int i=2;i <= l;i++){
 			j=k%i;
 			x=l%i;
 			if((j==0)&&(x==0)){
 				return 1;
			 }
			 
		 }
	}
	else{
 		for(int i=2;i <= k;i++){
 			j=k%i;
 			x=l%i;
 			if((j==0)&&(x==0)){
 				return 1;
			 }
	}		 
 }
 return 0;
}
