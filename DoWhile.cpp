#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	
	int cont=0,num;
	
	
	do{
		cout<<"Digite un numero: "<<endl;
		cin>>num;
		
		if(num!=0){
	cont++;
			
			
		}
		
	}while(num!=0);
	
		cout<<"Los numeros introducidos fueron: "<<cont<<endl;
		
	
	getch();
	return 0;
}
