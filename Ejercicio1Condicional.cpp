#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	
	int num,cont=1,numt;
	do{
	
	cout<<"Digite un numero: ";
	cin>>num;
		}	while(num<0);
		
		
	for(int i=1;i<=num;i++){
		
		cont=cont*i;
	}
	cout<<"El factorial del numero es: "<<cont<<endl;
	getch();
	return 0;
}
