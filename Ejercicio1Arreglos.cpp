#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

	int tam;
	
		cout<<"Tamaño del arreglo?:  "<<endl;
		cin>>tam;	
		
	
	int arreglo[tam];
	
	
	srand(time(NULL)); //numeros aleatorios.
	
	//Rellenar arreglo con numeros aleatorios.
		for(int i=0;i<tam;i++){
		arreglo[i]=1+rand()%(100);	
	}
	
	for(int i=0;i<tam;i++){
		cout<<"Arreglo["<<i<<"] = "<<arreglo[i]<<endl;
	}
	return 0;
	}
	
	
