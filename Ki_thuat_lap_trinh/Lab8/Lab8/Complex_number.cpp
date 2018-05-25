#include <math.h>
#include "Complex_number.h"


//using namespace std;

Number::Number(){
}

Number::~Number(){
}

double Number::SetReal(double real){
    real_num = real;
    return real_num;
}

double Number::SetImaginary(double imaginary){
    imaginary_num = imaginary;
    return imaginary_num;
}

Number Number::operator+(const Number& other){
    Number number;
    number.real_num = this->real_num + other.real_num;
    number.imaginary_num = this->imaginary_num + other.imaginary_num;
    return number;
}

double Number::GetReal(){
    return real_num;
}

double Number::GetImaginary(){
    return imaginary_num;
}
