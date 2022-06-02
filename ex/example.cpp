#include <iostream>
using namespace std;
int main() {
	float a, b, c, M;
	cin >> a;
	cin >> b;
	cin >> c;
	M = a;
	if(M < b){
		M = b;
	}
	 if(M < c){
	 	M = c;
	 }
	 cout << M;
	 system("pause");
}
