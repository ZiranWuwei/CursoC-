#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int num[5],dato,i=0,posicion;
	bool encontrado=false;
	
	cout<<"Digite los elementos del arreglo."<<endl;
	for( int i=0;i<5;i++){
		cout<<i<<". Digite un numero: "<<endl;
		cin>>num[i];
	}
	
		cout<<"Digite el dato a buscar:"<<endl;
		cin>>dato;
		
		//busqueda secuencial
	while(i<5 && encontrado==false){
		if(num[i]==dato){
			
			encontrado=true;
			posicion=i;
		}
		i++;
	}
	if(encontrado==true){
		cout<<"encontrado, posicion: "<<posicion<<endl;
	}else{
		cout<<"no encontrado"<<endl;
	}
	
}
