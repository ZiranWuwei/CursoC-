#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int factorial(int);

int main(){
	int num;
	
	cout<<"Digite un numero";
	cin>>num;
	
	cout<<"El facorial del numero es: "<<factorial(num)<<endl;
	
	return 0;
}

int factorial(int num){
	int retorno;
	if(num==0){
		retorno=1;
	}else{
		retorno=num*factorial(num-1);
	}
	return retorno;
}
