#include<iostream>
#include<conio.h>

using namespace std;

int sumar(int,int);

int main(){
	
	int num1,num2;
	
	cout<<"Digite un numero: "<<endl;
	cin>>num1>>num2;
	
	cout<<sumar(num1,num2)<<endl;
	
}

int sumar(int num1,int num2){
	int suma;
	suma=num1+num2;
	return suma;	
}
