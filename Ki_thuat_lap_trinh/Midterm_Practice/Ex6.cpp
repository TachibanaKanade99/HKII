#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double n,i;
	double product = 1;
	cout<<"PLease enter the number: ";
	while (1){
		cin>>n;
		if (cin.fail()){
			cin.clear();
			cin.sync();
			cout<<"Invalid value"<<endl;
			cout<<"Please enter again: "<<endl;
		}
		else{
			break;
			}
		}
		for (i = 2; i <= n; i++){
			product *= pow((i-1)/i,2);
			}
		cout<<"The result is "<<product<<endl;
		return 0;
	}