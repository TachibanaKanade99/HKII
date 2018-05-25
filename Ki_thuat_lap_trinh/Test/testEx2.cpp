// Ex1:
#include<iostream>
#include<math.h>
#include<iomanip>
#define EPSILON 1.0E-6
using namespace std;

int main(){
	float n;
	cout<<"Please enter the amount of money: ";
	while (1){
		cin>>n;
		if (cin.fail()){
			cin.clear();
			cin.sync();
			cout<<"Invalid Input "<<endl;
			cout<<"Please enter the number: ";
		}
		else{
			break;
		}
	}
	while (n < 1){
		cout<<"Please enter the positive number: ";
		cin>>n;
	}
	string currency;
	cout<<"Please enter the currency you want to convert: ";
	cin>>currency;
	if (currency == "USD"){
		float n1 = n * 0.0088;
		cout<<right<<setw(15)<<setprecision(3)<<n<<" JPY = ";
		cout<<right<<setw(15)<<setprecision(3)<<n1<<" "<<currency<<endl;
	}
	else if (currency == "CAD"){
		float n2 = n * 0.011;
		cout<<right<<setw(15)<<setprecision(3)<<n<<" JPY = ";
		cout<<right<<setw(15)<<setprecision(3)<<n2<<" "<<currency<<endl;
	}
	else if (currency == "EUR"){
		float n3 = n * 0.0077;
		cout<<right<<setw(15)<<setprecision(3)<<n<<" JPY = ";
		cout<<right<<setw(15)<<setprecision(3)<<n3<<" "<<currency<<endl;
	}
	else if (currency == "VND"){
		float n4 = n * 200.43;
		cout<<right<<setw(15)<<setprecision(3)<<n<<" JPY = ";
		cout<<right<<setw(15)<<setprecision(3)<<n4<<" "<<currency<<endl;
	}
	return 0;
}