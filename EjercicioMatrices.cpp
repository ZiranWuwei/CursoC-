#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int arreglo [3][4],suma=0;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			
			cout<<"Digite un numero: ["<<i<<"] ["<<j<<"]= "<<endl;
			cin>>arreglo [i][j];
		}
	}
	 cout<<endl;
	 
	for(int i=0;i<4;i++){
		for(int j=0; j<5;j++){
			
			if(arreglo[i][j]%2==0){
				suma+= arreglo[i][j];
				
			}
		}
	}
	 
	 cout<<"la suma de los numeros pares es: "<<suma<<endl;
	 
	
	getch();
	return 0;
}
