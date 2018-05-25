#include<iostream>
using namespace std;

class box{
    private:
    double length;
    double height;
    double breadth;

    public:
    void GetLength(double _length){
        length = _length;
    }
    void GetHeight(double _height){
        height = _height;
    }
    void GetBreadth(double _breadth){
        breadth = _breadth;
    }
    void GetVolume(){
        double volume;
        volume = height * length * breadth;
        cout << "Volume is " << volume << endl; 
    }
};
    double box::GetArea(){
        double area = 10;
        return area;
    }


int main(){
    box box1;
    box1.GetLength(2.3);
    box1.GetHeight(5);
    box1.GetBreadth(10);
    box1.GetVolume();


    return 0;
}