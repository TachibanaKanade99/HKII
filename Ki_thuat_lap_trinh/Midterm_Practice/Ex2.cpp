#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	srand(time(NULL));
	int n1 = rand() % 14;
	cout<<"Random number from 5 to 15 is: "<<n1<<endl;
	int n2 = rand() % 13 + 7;
	cout<<"Random number from 7 to 20 is: "<<n2<<endl;
	float n3 = rand() % 2 + -1;
	cout<<"Random float number from -1 to 1 is:  "<<n3<<endl;
	return 0;

}