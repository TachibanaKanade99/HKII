#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;

int main(){
	srand(time(NULL));
	int n,n1;
	n = rand() % 2 + 1;
	cout<<"The random integer from 1 to 2 is: "<<n<<endl;
	double val = (double)rand() / RAND_MAX;
	if (val < 1.0/3){
		n1 = 2;
	}
	else if (val < 1.0/3 + 2.0/3){
		n1 = 1;
	}
	cout<<"The random number from 1 to 2 with probalities is: "<<n1<<endl;;
	return 0;
}