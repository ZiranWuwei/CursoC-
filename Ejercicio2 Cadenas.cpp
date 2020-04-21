#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main(){
	int contadorVocales;
	string palabra;
	
	cout<<"Digite la cadena: "<<endl;
	getline(cin,palabra);
	
	for(int i=0;i<palabra.length();i++){
		switch(palabra[i]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': contadorVocales ++; break;
		}
	}
	
	cout<<"El numero de vocales de la cadena son: "<<contadorVocales<<endl;
	getch();
	return 0;
}
