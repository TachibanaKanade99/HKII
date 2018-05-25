#include<iostream>
#include<math.h>
#include<string.h>
#include<iomanip>
#define EPSILON 1.0E-6
using namespace std;

int main(){
	float n;
	cout<<"Please enter the number: ";
	while (1){
		cin>>n;
		if (cin.fail()){
			cin.clear();
			cin.sync();
			cout<<"Invalid input"<<endl;
			cout<<"Please enter the number: ";
		}
		else{
			break;
		}
	}
	while (n < 1){
		cout<<"Plese enter the positive amount of money: ";
		cin>>n;
	}
		string currency;
		cout<<"Please choose the currency unit you want to convert: ";
		cin>>currency;
		if (currency == "JPY"){
			float n1 = n * 113.23;
			cout<<right<<setw(15)<<setprecision(3)<<n<<" USD = ";
			cout<<right<<setw(15)<<setprecision(3)<<n1<<" "<<currency<<endl;
		}
		else if (currency == "CAD"){
			float n2 = n * 1.27;
			cout<<right<<setw(15)<<setprecision(3)<<n<<" USD = ";
			cout<<right<<setw(15)<<setprecision(3)<<n2<<" "<<currency<<endl;
		}
		else if (currency == "EUR"){
			float n3 = n * 0.88;
			cout<<right<<setw(15)<<setprecision(3)<<n<<" USD = ";
			cout<<right<<setw(15)<<setprecision(3)<<n3<<" "<<currency<<endl;
		}
		else if (currency == "VND"){
			float n4 = n * 22732.50;
			cout<<right<<setw(15)<<setprecision(3)<<n<<" USD = ";
			cout<<right<<setw(15)<<setprecision(3)<<n4<<" "<<currency<<endl; 
		}
	return 0;
}