#include <iostream>


using namespace std;


class Box{
    private:
        double length;
        double height;
        double breadth;
    public:
        Box(double h, double b, double l);
        ~Box();
};

Box::Box(double h, double b, double l){
    length = l;
    height = h;
    breadth = b;
    cout << length << " " << height << " " << breadth << endl;
}

Box::~Box(){
}

int main(){
    Box box1(1.2, 2.3, 4.5);

    return 0;
}
