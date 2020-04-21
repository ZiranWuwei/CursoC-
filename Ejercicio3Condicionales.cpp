#include<iostream>
#include<cmath>
#include<conio.h>

using namespace std;

int main(){
	float num1,num2,num3;
	
		cout<<"Coloque 3 numeros: "<<endl;
	cin>>num1>>num2>>num3;
	
	if(num1>=num2){
		if(num1>=num3){
			cout<<"El numero 1 : "<<num1<<" Es el mayor";
		}
	}else{
		if(num2>=num1){
			if(num2>=num3){
				cout<<"El numero 2 : "<<num2<<" Es el mayor";
			}
		}
			}	if(num3>=num2){
				if(num3>=num1){
					cout<<"El numero 3 : "<<num3<<" Es el mayor";
				}
		}
		getch();
		return 0;
	}
