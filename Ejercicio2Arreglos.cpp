#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int tam;
	
	cout<<"Indique el tamaño del arreglo: "<<endl;
	cin>>tam;
	
	char arreglo[tam];
	
	for(int i=0;i<tam;i++){
		cout<<"Digite un caracter: ";
		cin>>arreglo[i];
	}
	
	cout<<endl;
	
	for(int i=(tam-1);i>=0;i--){
		cout<<arreglo[i]<<endl;
		
	}
	
	
	
	
}
