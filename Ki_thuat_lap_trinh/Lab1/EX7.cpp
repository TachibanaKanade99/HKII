#include<iostream>
#include<string>
using namespace std;
int main () {
	cout<<"Nhap n:"<<endl;
	int n;
	cin>>n;
	int remainder;
	string result;
	remainder = n %2;
	if (cin.fail()){
		cout<< "Error, please type the integer number"<<endl;
	}
	else {
	while (n > 0) {
		if (remainder == 0) {
			result = "0" + result;
		}
		else if (remainder == 1) {
			result = "1" + result;
		}
		n = n/2;
		remainder = n %2;
	}
	cout<< "Result = "<<endl;
	cout<<result<<endl;
	return 0;
	}
}
