#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	
	int cont=0,num;
	
	
	
	cout<<"Digite un numero: ";
	cin>>num;
	while(num!=0){
		cont++;
		cout<<"Digite un numero: ";
	cin>>num;
	}
	
	cout<<"El total de numeros introducidos es: "<<cont<<endl;
	
	getch();
	return 0;
}
