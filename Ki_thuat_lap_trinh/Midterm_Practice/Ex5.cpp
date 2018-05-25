#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	string result;
	cout<<"Please enter the decimal number: ";
	cin>>n;
	int remainder = n % 2;
	while (n > 0){
		if (remainder == 0){
			result = "0" + result;
		}
		else if (remainder == 1){
			result = "1" + result;
		}
		n = n / 2;
		remainder = n % 2;
	}
	cout<<"The binary number is "<<result<<endl;
	return 0;
}