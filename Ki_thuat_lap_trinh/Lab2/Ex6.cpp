#include<iostream>
#include <math.h>

using namespace std;

const double pi = acos(-1);

int main(){
    double R1,R2,R3;
    // cout<<"Radius of C1:";
    cin>>R1;
    // cout<<"Radius of C2:";
    cin>>R2;
    // cout<<"Radius of C3:";
    cin>>R3;
    double A1,A2,A3;
    A1 = R1*pi;
    A2 = R2*pi;
    A3 = R2*pi;
    cout<<"Area of C1 is:"<<A1<<endl;
    cout<<"Area of C2 is:"<<A2<<endl;
    cout<<"Area of C2 is:"<<A3<<endl;
    return 0;


}
