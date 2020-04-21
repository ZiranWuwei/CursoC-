#include<iostream>
#include<conio.h>

using namespace std;


void calMitad(float);
int main(){

int num;
cout<<"Digite un numero para sacar la mitad: "<<endl;
cin>>num;

calMitad(num);

	
}


void calMitad(float num){
	float mitad;
	mitad=num/2;
	cout<<"La mitad es: "<<mitad<<endl;
	
}
