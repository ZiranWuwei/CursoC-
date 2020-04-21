#include<iostream>
#include<conio.h>
#include<string>

using namespace std;


int main(){
	int contadorVocal;
	string palabra;
	
	cout<<"Digite una palabra: "<<endl;
	getline(cin,palabra);
	
	for(int i=0;i<palabra.length();i++){
		switch(palabra[i]){
			case 'a': 
			case 'e': 
			case 'i': 
			case 'o': 
			case 'u': contadorVocal ++;
			
		}
		
		
	}
//	frase2= frase.substr(0,4); 
//	cout<<frase2;

cout<<"el numero de vocales es: "<<contadorVocal;
	getch();
	return 0;
}
