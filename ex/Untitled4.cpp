#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	int i, ng=0, nt=0, nq=0;
	char espressione[50];
	gets(espressione);
	system("cls");
	cout << espressione << endl;
	for(i=0;i < 50;i++){
		switch(espressione[i]){
			case '{': case '}':
				ng++;
				break;
			case '(': case ')':
				nt++;
				break;
			case '[': case ']':
				nq++;
				break;
			} 
		}
		cout << "Numero graffe: " << ng << endl;
		cout << "Numero quadre: " << nq << endl;
		cout << "Numero tonde: " << nt << endl;
		
	}
	

