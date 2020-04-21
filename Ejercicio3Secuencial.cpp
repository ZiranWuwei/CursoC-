#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int h,m,t;
	float ph,pm;
	
	
	cout<<"Indique el numero de hombres del aula: "<<h<<endl;
	cin>>h;
	
	cout<<"Indique el numero de mujeres del aula: "<<m<<endl;
	cin>>m;
	
	t=h+m;
	ph=(float)h/t*100;
	pm=(float)m/t*100;
	
	cout<<"El porcentaje de hombres en el aula es: "<<ph<<"%"<<endl;
	cout<<"El porcentaje de mujeres en el aula es: "<<pm<<"%"<<endl;
	
	
	return 0;
}
