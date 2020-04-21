#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	int arreglo[5];
	bool creciente=false, decreciente=false;
	
	for(int i=0;i<5;i++){
		cout<<"Digite un numero: "<<endl;
		cin>>arreglo[i];
	}
	
	for(int i=0;i<5;i++){
		
		if(arreglo[i]<arreglo[i+1]){
			creciente=true;
		}
		if(arreglo[i]>arreglo[i+1]){
			decreciente=true;
		}
		
		
	}
	
	if(creciente==true && decreciente==false){
		cout<<"El arreglo esta ordenado de forma creciente.";
	}else if (creciente ==false && decreciente== true){
			cout<<"El arreglo esta ordenado de forma creciente.";
	}else{
			cout<<"El arreglo esta desordenado.";
	}

	
	
}
