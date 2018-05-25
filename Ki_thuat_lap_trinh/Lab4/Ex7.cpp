#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
	int h,k,i;
	int space;
	//int space;
	cout<<"Please enter h:";
	cin>>h;
	for (i= 1,k = 0;i<=h;i++,k=0){
		for (space = 1;space<=h-i;space++){
			cout<<"  ";
		}
		while (k!= 2*i - 1){
			cout<<"* ";
			k++;
		}
		cout<<endl;
	}
	cout<<" "<<endl;
	for (int i = 1;i<=h;i++){
		for (int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<" "<<endl;
	for (int i=h;i>=1;i--){
		for (int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}