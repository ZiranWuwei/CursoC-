#include<iostream>

using namespace std;

int main(){
	int num;
	
	cout<<"Digite su edad: "<<endl;
	cin>>num;
	
	if(num>=18){
		
		cout<<"Puede votar"<<endl;
		
	}
	else{
		cout<<"No puede votar "<<num<<endl;
	}
	
	
	
	
	return 0;
}
