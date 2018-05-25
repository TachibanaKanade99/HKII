#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n,i;
	double sum = 0;
	cout<<"Please enter the number: ";
	while (1){
	cin>>n;
	if (n < 0){
		cout<<"Please enter non-negative number: ";
	}
	else{
		break;
	}
}
	for (i = 0; i <= n; i++){
		sum += 1.0 / ( 2 * i + 1);
	}
	cout<<"The following sum is: "<<sum<<endl;
}