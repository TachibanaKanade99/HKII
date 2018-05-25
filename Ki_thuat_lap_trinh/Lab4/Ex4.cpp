#include<iostream>
#include<math.h>
using namespace std;

int main(){
	signed long int n;
	float temp;
	while (n<=0){
		cout<<"Please enter the positive number:";
		cin>>n;
		n -= 1;
		temp = (rand() % 1001)/100.0;
		}
	cout<<temp;
	return 0;
}