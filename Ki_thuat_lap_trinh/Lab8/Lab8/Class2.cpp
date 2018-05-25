#include<iostream>
using namespace std;
//Constructor and Destructor:
class X{
    private:
    double length;

    public:
    void display(){
        cout<<"Type of \"this\" object is:Class X " << endl;
    }
    X(void){
        cout << "The project is being created " << endl;
    }
    X (const X &obj);
    ~X(void){ 
        cout<< "The project is deleted " << endl;
    }

};

int main(){
   X x;

   return 0;
}