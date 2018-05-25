#include<iostream>
#include<cstdlib>
#include<time.h>
#include<iomanip>
using namespace std;

class Line {
private:
    double length;
public:
    void GetLength(double len){
        length = len;
        cout<< "Length of line: " << endl;
    }
    double* ptr = new double[10];
    Line (){
        for (int i = 0; i < 10; i++){
            ptr[i] = rand() % 20 + 1;
        }

        for (int i = 0; i < 10; i++){
            cout << setw(5) << ptr[i];
        }
        cout << endl;
    }
    ~Line(){
        delete ptr;
        cout << "Delete the pointer " << endl;
    }
};

int main(){ 
    srand(time(NULL));
    Line line1;

    return 0;
}