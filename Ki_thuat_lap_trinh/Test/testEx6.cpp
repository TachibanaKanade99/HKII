#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int h;
	int j,space,i;
	cout<<"Please enter the height: ";
	cin>>h;
	for (i = h;i >=1; i--){
		for (space = 0; space <= h - i;space++){
			cout<<" ";
		}
		for (j = 1; j <= i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}