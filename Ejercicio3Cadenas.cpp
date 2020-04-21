#include<iostream>
#include<conio.h>
#include<string>

using namespace std;


int main(){
	string cadena,cadenaAux;
	int i=0;
	
		cout<<"Digite la cadena: "<<endl;
	getline(cin,cadena);
	
	
	while(i<cadena.length()){
		
		if(cadena[i]==' '){
			i++;
			
		}else{
			cadenaAux+= cadena[i];
			i++;
		}
	}
	cadena=cadenaAux;
	
	cout<<"La cadena sin espacios es: "<<cadena<<endl;
}
