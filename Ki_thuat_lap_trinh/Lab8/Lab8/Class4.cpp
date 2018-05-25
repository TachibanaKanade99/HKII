#include<iostream>
using namespace std;

class X{
public:
    X();
    void setlength(double len);
    ~X();
};

void X::setlength(double len){
    cout << "The length is " << len << endl;
}

X::X(){
    cout << "This is the constructor's function " << endl;
}
X::~X(){
    cout<< "The destructror is created " << endl;
}

int main(){
    X x;
    x.setlength(10);

    return 0;
}
