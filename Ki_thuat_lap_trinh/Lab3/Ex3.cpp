#include<iostream>
#include<math.h>
using namespace std;
#define EPSILON 1e-6

bool equals(double x, double y) {
    if (y > x - EPSILON && y < x + EPSILON) {
        return true;
    }
    return false;
}

bool tamgiac(double a,double b, double c){
	if ((a+b>c) && (b+c>a) && (a+c>b)){
		return true;
	}
	else{
        return false;
	}
}
int main(){
	double a,b,c;
	cout<<"Please enter the value of a,b,c:";
	cin>>a>>b>>c;

    double x = pow(a,2)+pow(b,2);
    double y = pow(c,2);

	if (tamgiac(a,b,c)==true){
        if (a==b){
            if (a==c){
                cout<<"This triangle is equilateral"<<endl;
            }
            else{
                if (equals(x,y) == true){
                    cout<<"This triangle is right isosceles "<<endl;
                    return 0;
			}
			else{
                cout<<"This triangle is isosceles"<<endl;
			}
            }
        }
        else{
            if (equals(x,y) == true){
                cout<<"This is right triangle"<<endl;
                return 0;
                }
             else{
                cout<<"This is a triangle"<<endl;
            }
    }
	}
        else cout<<"This is not a triangle"<<endl;
        return 0;
}
