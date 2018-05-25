#include<iostream>
#include<sstream>
using namespace std;

int main(){
    stringstream ss;
    ss<<"100 2000";
    int First,Second;
    ss>>First>>Second;
    cout<<"The first number is:"<<First<<endl;
    cout<<"The second number is:"<<Second<<endl;
    int sum = First + Second;
    cout<<"The sum of two number"<<sum<<endl;
    int m = First*Second;
    cout<<"The multiplication of two number is:"<<m<<endl;
    return 0;
}

