#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n,i;
	int sum = 0;
	while (n<=0){
		cout<<"Please enter the positive number:";
		cin>>n;

		for (i=0;i<=n;i++){
			if (i%2 !=0){
				sum += pow(i,2);
			}
		}
	}
	cout<<"Sum is:"<<sum<<endl;
	return 0;
}