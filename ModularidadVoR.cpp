#include<iostream>
#include<conio.h>

using namespace std;

int aumentar(int);
int Pedirdato(int &);
int main(){
	int numero;
	
	Pedirdato(numero);
	
	cout<<"El aumento es: "<<aumentar(numero)<<endl;
	
	
}

int aumentar(int num){
	int aumento;
	
	aumento=num+10;
	return aumento;
}

int Pedirdato(int &num){
	cout<<"Digite un numero: "<<endl;
	cin>>num;
}
