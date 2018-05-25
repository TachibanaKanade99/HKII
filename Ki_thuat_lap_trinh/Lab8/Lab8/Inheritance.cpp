#include <iostream>

using namespace std;

class Shape{
    protected:
        double width;
        double height;
    public:
        void SetWidth(double w){
            width = w;
        }
        void SetHeight(double h){
            height = h;
        }
};

class Triangle: public Shape{ // Inheritance from the shape
    public:
        double GetArea(){
            return ( 1.0 / 2 * width * height);
        }
};

int main(){
    Shape shape;
    Triangle triangle;
    triangle.SetWidth(10.3);
    triangle.SetHeight(5.6);
    double area = triangle.GetArea();
    cout << "Area is " << area;
    return 0;
}
