#include<iostream>

using namespace std;

int main(){
	int num;
	
	cout<<"Digite un numero entre 1-5"<<endl;
	cin>>num;
	switch(num){
		case 1: cout<<"El valor es 1"<<endl;
		break;
		case 2: cout<<"El valor es 2"<<endl;
		break;
		case 3: cout<<"El valor es 3"<<endl;
		break;
		case 4: cout<<"El valor es 4"<<endl;
		break;
		case 5: cout<<"El valor es 5"<<endl;
		break;
		default:
			cout<<"El valor  no esta entre el 1-5"<<endl;
		
		
	}
	
	return 0;
}
