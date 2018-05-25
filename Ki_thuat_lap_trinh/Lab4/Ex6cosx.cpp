#include<iostream>
#include<math.h>
#define EPSILON 1.0E-10
using namespace std;

const double pi = acos(-1);
//const int INF = pow(10,10);

int fact_cal(int n, int i, int fact){
	fact = 1;
	for (i = 1; i <= (2 * n); i++){
		fact *= i;
	}
	return fact;
}

int main(){
	double x;
	double A, B, C;
	double result = 0;
	cout<<"Please enter the value of x: ";
	cin>>x;
	x *= pi /180;
	int i, n, fact, m;
	cout<<"Please enter the value of m: ";
	cin>>m;
	for (n = 0; n <= m; n++){
		A = pow((-1), n);
		B = pow(x, (2 * n));
		C = fact_cal(n, i, fact);
		result += A * B / C;
	}
	cout<<"cos = "<<result<<endl;
	return 0;
}