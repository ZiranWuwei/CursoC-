#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int arreglo[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		
		
		cout<<"Digite un numero: ["<<i<<"] ["<<j<<"]."<<endl;
		cin>>arreglo[i][j];
		
		}
		cout<<endl;
		
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		
		
		cout<< arreglo[i][j]<<" ";;
		
		}
		cout<<endl;
		}
}
