#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int h,i,j,space;
	cout<<"Enter h:";
	cin>>h;
	for (i = h; i >= 1;i--){
		for (space = 0;space <= h-i; space++){
			cout<<"  ";
		}
		for (j = i;j <= 2*i -1; j++){
			cout<<"* ";
		}
		for (j = 0; j < i-1;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}