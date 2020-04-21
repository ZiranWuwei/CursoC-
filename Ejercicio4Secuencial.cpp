#include<iostream>
#include <cmath>

using namespace std;

int main(){
	float p,pro,tp,tpp;
	
	p=0.15;
	
	cout<<"Indique el monto para descuento: "<<endl;
	cin>>pro;
	
	tp=pro*p;
	tpp=pro-tp;
	
	cout<<"El precio final es: "<<tpp<<endl;
	
	
	
	return 0;
}
