#include <iostream>
#include <string.h>

using namespace std;
#define n 100

int main(){
	int n0 = 0, i;
	char s1[n], s2[n];
	cout << "Inserici  stringa s1: ";
	gets(s1);
	cout << "Inserisci stringa s2: ";
	gets(s2);
	system("cls");
	for(i=0;s1[i] != '\0'; i++){
		int j=0;
		int  k=i;
		while((s1[k]==s2[j])&&(s1[k]!='\0')){
			k++;
			j++;
		}
		if(s2[j]=='\0')
			n0=n0+1;
	}
	cout << s2 << " compare " << n0 << " Volte in " << s1;
}
