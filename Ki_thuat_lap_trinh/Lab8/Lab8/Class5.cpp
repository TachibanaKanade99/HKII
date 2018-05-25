#include <iostream>


using namespace std;



class Box {
    private:
        double length;
        double breadth;
        double height;
    public:
        Box(double l, double h, double b);
        ~Box();
        int compare(Box box);
        double volume();
};

Box::Box(double l, double h, double b){
    cout << "The construction is called " << endl;
    length = l;
    breadth = b;
    height = h;
}

Box::~Box(){
}
    // Create the function Volume:
double Box::volume(){
        return length * breadth * height;
    }

    // Create the compare function between boxes:

int Box::compare (Box box){
        return this -> volume() > box.volume(); // this -> volume() is box volume
        // box.volume() is the box box that is used to compare:
    }

int main(){
    Box box1(1.2, 2.3, 4.5);
    Box box2(1, 1, 1);
    if (box1.compare(box2)){
        cout << "Box 2 is smaller than box 1 ";
    }
    else{
        cout << "Box 2 is bigger than box 1 ";
    }

    return 0;
}
