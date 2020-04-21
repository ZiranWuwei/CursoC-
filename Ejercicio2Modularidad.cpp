#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

void Menu();
int potenciacion(int,int);
float raiz(int);
int main(){
	
	
	Menu();
	
	getch();
	return 0;
}

void Menu(){
	int opcion;
	int num,expo;
	
	do{
	
	cout<<"Digite un número para seleccionar la opcion: "<<endl;
	cout<<"1. pOTENCIACION: "<<endl;
	cout<<"2. Raiz cuadrada: "<<endl;
	cout<<"3. Terminar"<<endl;
		cout<<"Digite una opcion: "<<endl;
		cin>>opcion;
		
		switch(opcion){
	case 1:cout<<"Digite la base: ";
			cin>>num;
			cout<<"digite el exponente: ";
			cin>>expo;
			cout<<"La potencia es: "<<potenciacion(num,expo)<<endl;break;
			
			
		case 2: cout<<"Digite un numero: ";
			cin>>num;
			cout<<"La raiz cuadrada del numero es: "<<raiz(num)<<endl;
			break;
		case 3:break;
		default: cout<<"Se equivocó de opcion"<<endl;
}
}while(opcion!=3);
}




int potenciacion(int num,int expo){
	int potencia;
	potencia= pow(num,expo);
	return potencia;
}
float raiz(int num){
	float raiz;
	raiz= sqrt(num);
	return raiz;
}


