#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    int a;
    cout<<"Enter the width of the rectangle"<<endl;
    cin>>a;
    int h;
    cout<<"Enter the height of the rectangle"<<endl;
    cin>>h;
    int P;
    P = (a+h)*2;
    cout<<"The perimeter of the rectangle:"<<P<<endl;
    int A;
    A = a*h;
    cout<<"The area of the rectangle:"<<A<<endl;
    return 0;
}
