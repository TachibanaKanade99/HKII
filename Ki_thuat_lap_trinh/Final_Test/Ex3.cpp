#include<iostream>


using namespace std;

class Vehicle{
    protected:
        int NumberOfWheel;
        float MaxFuel;
        float MaxVelocity;
    public:
        static int NumVehicle;
        Vehicle(){
            NumVehicle++;
        }
};

int Vehicle::NumVehicle = 0;

class Car: Vehicle{
    public:
        Car(double wheel, double fuel, double velocity);
        ~Car();
        double GetNumberOfWheel(double wheel);
        double GetMaxFuel(double fuel);
        double GetMaxVelocity(double velocity);
};

Car::Car(double wheel, double fuel, double velocity){
        NumberOfWheel = wheel;
        MaxFuel = fuel;
        MaxVelocity = velocity;
}

Car::~Car(){
}
/*
double Car::GetNumberOfWheel(double wheel){
    NumberOfWheel = wheel;
    return NumberOfWheel;
}
double Car::GetMaxFuel(double fuel){
    MaxFuel = fuel;
    return MaxFuel;
}
double Car::GetMaxVelocity(double velocity){
    MaxVelocity = velocity;
    return MaxVelocity;
}
*/

class Bicycle: Vehicle{
    public:
    Bicycle(double wheel, double fuel, double velocity);
    ~Bicycle();
};

Bicycle::Bicycle(double wheel, double fuel, double velocity){
    NumberOfWheel = wheel;
    MaxFuel = fuel;
    MaxVelocity = velocity;
}

Bicycle::~Bicycle(){
}

int main(){
    Car car(2.3, 4.5, 6.7);
    Bicycle bicycle(1.2, 3, 5.9);
    cout << Vehicle::NumVehicle;
    return 0;
}
