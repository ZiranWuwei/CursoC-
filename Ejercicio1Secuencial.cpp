#include<iostream>

using namespace std;

int main(){
	int h,m,s,t1,t2,tt;
	
	cout<<"Indique el numero de horas"<<endl;
	cin>>h;
	
	cout<<"Indique el numero de minutos"<<endl;
	cin>>m;
	
	cout<<"Indique el numero de segundos"<<endl;
	cin>>s;
	
	t1=3600*h;
	t2=60*m;
	tt=t1+t2+s;
	
	cout<<"El valor en segundos es: "<<tt<<endl;
	return 0;
}
