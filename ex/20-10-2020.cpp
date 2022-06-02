#include <iostream>
#include <cmath>
 using namespace std;
 
 int main(){
 	float c, t ,t1 ,c1 ,tt, pre;
	cout << "Quanto hai guadagnato alla vendita del te?" << endl;
	cin >> t;
	t1 = t;
	if(t > 2000){
		t1 = (t/100)*10;
	} 
	cout << "Quanto hai guadagnato alla vendita del caffe?" << endl;
	cin >> c;
	c1 = c;
	system("cls");
	if(t > 10000){
		c1 =(c/100)*9;
		}
	tt = t1 + c1;
	if( tt > 12000){
		cout << "Hai superato i 1200 euro, quanto vuoi dare di premio?";
		cin >> pre;
		tt = tt+pre;
	 	cout << "Questo è il totale:" << tt << endl;
	 }
		else{
			cout << "Non hai superato i 12000 euro.. niente bonus!" << endl;
			cout << "Questo è il totale:" << tt << endl;
		}
 }
 
