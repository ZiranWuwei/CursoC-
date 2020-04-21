#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	char arreglo [4][4],suma=0;
	char diagonal[4];
	int pos=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			
			cout<<"Digite un numero: ["<<i<<"] ["<<j<<"]= "<<endl;
			cin>>arreglo [i][j];
		}
	}
	 cout<<endl;
	 
	for(int i=0;i<4;i++){
		for(int j=0; j<4;j++){
			cout<<arreglo[i][j]<<" ";
		
			if(i==j){
				diagonal[pos]=arreglo[i][j];
				pos++;
			}
			
			}
			}
		
	
		cout<<"Los elementos de la diagonal principal son: "<<endl;
			for(int i=0;i<4;i++){
		for(int j=0; j<4;j++){
			cout<<arreglo[i]<<" ";
			
			}
	
	}
	}
	
	
