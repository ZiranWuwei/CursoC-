#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int arreglo [4][4],suma_filas=0,filas[4],posfila=0;
	int sumacol=0,col[4],poscol=0;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			
			cout<<"Digite un numero: ["<<i<<"] ["<<j<<"]= "<<endl;
			cin>>arreglo [i][j];
		}
	}
	 cout<<endl;
	 
		for(int i=0;i<4;i++){
			suma_filas=0;
		for(int j=0;j<4;j++){
			suma_filas+=arreglo[i][j];
}
filas[posfila]=suma_filas;
posfila++;
}

for(int j=0;j<4;j++){
	sumacol=0;
	for(int i=0;i<4;i++){
		sumacol+=arreglo[i][j];	
	}
	col[poscol]=sumacol;
	poscol++;
}

cout<<endl;

cout<<"La suma de las filas es: ";
for	(int i=0;i<4;i++){
	cout<<filas[i]<< " ";
}
cout<<"La suma de las filas es: ";
for	(int j=0;j<4;j++){
	cout<<col[j]<< " ";
}

}
