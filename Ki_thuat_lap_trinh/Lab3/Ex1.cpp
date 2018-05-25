#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double OX,OY;
    double AX,AY;
    double r;
    cout<<"Please enter the x and y of the center O:";
    cin>>OX>>OY;
    cout<<"Please enter the radius R:";
    cin>>r;
    cout<<"Please enter the x and y of the point A:";
    cin>>AX>>AY;
    if (r <= 0){
        cout<<"The value of radius is invalid.PLease enter again"<<endl;
        return 0;
    }
    else{
        double d;
        d = sqrt(pow(AX-OX,2) + pow(AY-OY,2));
        if (d<=r){
            cout<<"The point A lies inside the circle"<<endl;
        }
        else{
            cout<<"The point A lies outside the circle"<<endl;
        }
    }
    return 0;
}