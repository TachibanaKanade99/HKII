#include <iostream>


using namespace std;


class Screen{
    protected:
        int Width;
        int Height;
        int Area = Width * Height;
        int dpi;
    public:
        static double KnownMaxArea;
        KnownMaxArea = 0;
        Screen(double ar){
            ar = Area;
            return ar;
            if (this -> GetArea() > KnownMaxArea){
                KnownMaxArea = ar;
            }
        }
};

class TV: Screen{
    public:
        TV(double w, double h, double pi){
            Width = w;
            Height = h;
            dpi = pi;
        }

};

class Monitor: Screen{
    public:
        Monitor(double w, double h, double pi){
            Width = w;
            Height = h;
            dpi = pi;
        }
};

int main(){
    TV tv(1.2, 3.4, 4.5);
    Monitor monitor(2.3, 10, 2);
    cout << Screen::KnownMaxArea;
    return 0;
}
