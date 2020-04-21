#include<iostream>
#include<cmath>

using namespace std;

int main(){
	float num1,num2,num3,numt;
	
		cout<<"Digite Primera nota: "<<endl;
	cin>>num1>>num2>>num3;
	
	numt=(num1+num2+num3)/3;
	

		if(numt>=70){
			cout<<"Aprobado con: "<<numt;
		}
		else{
					cout<<"No aprobado"<<endl;
		}
		

	getch();
	return 0;
}
