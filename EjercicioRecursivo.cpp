#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

int potenciacion(int,int);

int main(){
	int num;
	int expo;
	
	cout<<"Digite una base: ";
	cin>>num;

cout<<"Digite un exponente: ";
cin>>expo;	

	cout<<"La potencia es: "<<potenciacion(num,expo)<<endl;
	
	return 0;
}

int potenciacion(int num,int expo){
	int retorno;
	if(num==0){
		retorno=1;
	}else{
		retorno= num* pow(num,expo-1);
	}
	return retorno;
}
