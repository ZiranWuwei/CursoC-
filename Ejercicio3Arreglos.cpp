#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int tam,mayor,menor;
	
	cout<<"Indique el tamaño del arreglo: "<<endl;
	cin>>tam;
	
	int arreglo[tam];
	
	for(int i=0;i<tam;i++){
		cout<<"Digite un numero: ";
		cin>>arreglo[i];
	}
	
	cout<<endl;
	
	mayor=arreglo[0];
	menor=arreglo[0];
	
	for(int i=1;i<tam;i++){
		
		if(arreglo[i]>mayor){
			mayor=arreglo[i];
		}
	
		
		if(arreglo[i]<menor){
			menor=arreglo[i];
		}
	}
	
		cout<<"Es el mayor "<<mayor<<endl;
		cout<<"Es el menor "<<menor<<endl;
	
	}
