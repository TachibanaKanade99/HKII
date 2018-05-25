#include<iostream>
#include<sstream>
#include<string.h>
#include<math.h>
using namespace std;

int f(int n){
	if (n == 1 || n == 0){
		return 1;
	}
	else{
		return f(n-1) + (n-2);
	}
}
int main(){
	int n;
	cout<<"Enter the number:";
	while (1){
		cin>>n;
		if (cin.fail()){
			cin.clear();
			cin.sync();
			cout<<"Invalid input"<<endl;
			cout<<"Enter again:";
		}
		else{
		break;
	}
	}
	cout<<"You have entered "<<n<<endl;
	cout<<"The "<<n<<" th Fibonaci number is: "<<f(n)<<endl;
	return 0;
}