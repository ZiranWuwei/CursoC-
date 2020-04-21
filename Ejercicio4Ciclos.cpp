#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	
	int num,cont,suma=0;
	float promedio;
	char ver='s';
	do{
	
	cout<<"Digite un numero: "<<endl;
	cin>>num;
	
	
	suma= suma+num;
	cont++;
	
	
	cout<<"Desea terminar? Digite (s/n): "<<endl;
	cin>>ver;
	
	
		}	while(ver!='s');
		
		
		promedio=(float)suma/cont;
		
		
	cout<<"El promedio es: "<<promedio<<endl;
	cout<<"La suma de los numeros es: "<<suma<<endl;
	getch();
	return 0;
}
