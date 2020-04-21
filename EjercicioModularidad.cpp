#include<iostream>
#include<conio.h>
#include<string>

using namespace std;


void Pedirdato(string &);
void Copiarn(string);
int main(){

	string name;

	
		Pedirdato(name);
			Copiarn(name);
			
}
void Pedirdato(string &name){
	cout<<"Digite su nombre: ";
	getline(cin,name);
}

void Copiarn(string name){
	
	for(int i=0; i<name.length();i++){
		cout<<"*";
	}
	cout<<endl;
	cout<<name<<endl;
	
	for(int i=0; i<name.length();i++){
		cout<<"*";
	}
	
}

