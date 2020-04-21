#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int arreglo[5];
	int aux,i;
	bool ordenado=false;
	
	cout<<"Digite los elementos del arreglo: "<<endl;
	for(int i=0;i<5;i++){
		cout<<"digite un numero"<<endl;
		cin>>arreglo[i];
	}

	
	while(ordenado==false && i<4){
	
	
		ordenado=true;
		for(int j=0;j<4;j++){
			if(arreglo[j]>arreglo[j+1]){
				aux=arreglo[j];
				arreglo[j]=arreglo[j+1];
				arreglo[j+1]=aux;
				ordenado=false;
			}
		}
		i++;
	}
		cout<<"Arreglo ordenado es."<<endl;
		for (int i=0;i<5;i++){
			cout<<arreglo[i];
		}
	
}
