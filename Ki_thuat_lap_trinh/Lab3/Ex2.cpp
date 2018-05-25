#include<iostream>
#include<math.h>
using namespace std;

int main(){
    unsigned int x;
    cout<<"Please enter X:";
    cin>>x;
    if (x<0){
        cout<<"The value of X is invalid. Please type again"<<endl;
        return 0;
    }
    else{
        if ((x==0) && (x%7==0)) cout<<"It's same day as today"<<endl;
        else{
            int i = x%7;
            switch(i){
                case 1:
                cout<<"That day is Monday"<<endl;
                break;
                case 2:
                cout<<"That day is Tuesday"<<endl;
                break;
                case 3:
                cout<<"That day is Wednesday"<<endl;
                break;
                case 4:
                cout<<"That day is Thursday"<<endl;
                break;
                case 5:
                cout<<"That day is Friday"<<endl;
                break;
                case 6:
                cout<<"That day is Saturday"<<endl;
                break;
            }
        }
    }
    return 0;
}