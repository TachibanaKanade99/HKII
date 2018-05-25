#include<iostream>
#include<math.h>
#include<sstream>
using namespace std;

int main(){
	int n;
	int sum = 0, remainder;
	cout<<"PLease enter the number: ";
	cin>>n;
	while (n > 0){
		remainder = n % 10;
		sum += remainder;
		n /= 10;
	}
	cout<<"Sum of all digit in the number: "<<sum<<endl;
	return 0;
}