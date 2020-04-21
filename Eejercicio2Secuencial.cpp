#include<iostream>
#include <cmath>
using namespace std;

int main(){
	float radio,area,longitud;
	const float Pi=3.14;
	
	cout<<"Indique el radio"<<endl;
	cin>>radio;
	
	
	area= Pi*pow(radio,2);
	longitud= 2*Pi*radio;
	
	cout<<"El area es: "<<area<<endl;
	cout<<"La longitud es: "<<longitud;	
	
	
	
	return 0;
}
