#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    int f = 6;
    int g = 7;
    int h = 8;
    int i = 9;
    int tong1 = a+b+c;
    int tong2 = d+e+f;
    int tong3 = g+h+i;
    cout<<right<<a<<setw(5)<<b<<setw(5)<<c<<setw(5)<<"|"<<setw(5)<<tong1<<endl;
    cout<<right<<d<<setw(5)<<e<<setw(5)<<f<<setw(5)<<"|"<<setw(5)<<tong2<<endl;
    cout<<right<<g<<setw(5)<<h<<setw(5)<<i<<setw(5)<<"|"<<setw(5)<<tong3<<endl;
    return 0;
}
