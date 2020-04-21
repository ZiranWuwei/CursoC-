#include<iostream>
#include<conio.h>
#include<string>

using namespace std;


int main(){
	string cadena,cadenaAux;
	
	cout<<"Digite una cadena: "<<endl;
	getline(cin,cadena);
	
	for(int i=0;i<cadena.length();i++){
		if(cadena[i]!=' '){
			cadenaAux+= cadena[i];
		}
	}
	
	cadena= cadenaAux;
	
	cadenaAux.clear();
	
	for(int i=cadena.length()-1;i>=0;i--){
		cadenaAux+=cadena[i];
		
		
	}
	
	if(cadena==cadenaAux){
		cout<<"Es un palindromo"<<endl;
	}else{
		cout<<"No es un palindromo"<<endl;
	}
	getch();
	return 0;
}
