#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a,b,c,x1,x2,D;
    cout<<"Nhap vao a,b,c:";
    cin>>a>>b>>c;
    if (a==0){
        if (b==0) cout<<"Phuong trinh vo nghiem"<<endl;

        else{
            double x = -c/b;
            cout<<"Nghiem cua phuong trinh la:"<<x<<endl;
            }
    }
    else{
        D = pow(b,2) - 4*a*c;
        if (D<0){
            cout<<"Phuong trinh vo nghiem"<<endl;
            }
        else if (D == 0) {
            double x3 = -b/(2*a);
            cout<<"Nghiem cua phuong trinh la:"<<x3<<endl;
        }
        else if (D>0){
            cout<<"Phuong trinh co 2 nghiem phan biet"<<endl;
            x1 = (-b + sqrt(D))/2*a;
            x2 = (-b - sqrt(D))/2*a;
            cout<<"x1 la:"<<x1<<endl;
            cout<<"x2 la:"<<x2<<endl;
            }
        }
    return 0;
}
