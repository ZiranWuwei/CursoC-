#include<iostream>
#include<conio.h>
#include<string>

using namespace std;


int main(){
	string pal1,pal2;
	
	cout<<"Digite la primera cadena: "<<endl;
	getline(cin,pal1);
	
	cout<<"Digite la segunda cadena: "<<endl;
	getline(cin,pal2);
	
	
	if(pal1.length()>pal2.length()){
		
		cout<<"La Primera cadena es la más larga:  "<<pal1<<endl;
	}else if(pal1.length()<pal2.length()){
		cout<<"La Segunda cadena es la más larga: "<<pal2<<endl;
	}else{
		cout<<"Ambas cadenas son iguales."<<endl;
	}
}
