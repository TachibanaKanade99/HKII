#include<iostream>
#include<string>
using namespace std;

int main(){
	char a = '0';
	//cout<<"Please enter the number:";
	//cin>>a;
	
	while (a <= '9'){
		int val = (int) a;
		cout<<"The ASCII values of number "<< a <<" is:"<< val <<endl;
		a++;
	}
	char b = 'a';
	while (b<='z'){
		int c = (int) b;
		cout<<"The ASCII values of lower case character "<<b<<" is: "<<c<<endl;
		b++;
	}
	return 0;
}