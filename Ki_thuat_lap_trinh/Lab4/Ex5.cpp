#include<iostream>
#include<math.h>
#define EPSILON 1.0E-10
using namespace std;

const double pi = acos(-1);

int fact_cal(int n, int fact, int i, int u){
	fact = 1;
	u = 2 * n + 1;
	for(i = 1; i <= u; i++){
		fact *= i;
	}
	return fact;
}

int main(){
	double x;
	double A;
	double B;
	double C;
	double result = 0;
	int n,fact,i,u;
	int m;
	cout<<"Please enter the value of x: ";
	cin>>x;
	cout<<"Please enter the value of m: ";
	cin>>m;
	x *= pi / 180.0;
	for (n = 0; n <= m; n++){
		A = pow( x, (2 * n + 1));
		B = fact_cal(n,fact,i,u);
		C = pow((-1),n);
		result += C*A/B;
	}
	cout<<"X in radian is: "<<x<<endl;
	cout<<"A = "<< A <<endl;
	cout<<"B = "<< B <<endl;
	cout<<"C = "<< C <<endl;
	cout<<"sin of "<<x<<" is "<<result;
	return 0;
}