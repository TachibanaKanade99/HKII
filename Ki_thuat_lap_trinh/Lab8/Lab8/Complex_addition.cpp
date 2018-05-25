#include <iostream>
#include "Complex_number.h"


//using namespace std;

int main()
{
    double nu1_real, nu1_imagin;
    double nu2_real, nu2_imagin;
    Number number1;
    Number number2;
    Number sum;
    std::cout << "Enter the real part of number1: ";
    std::cin >> nu1_real;
    std::cout << "Enter the imaginary part of number1: ";
    std::cin >> nu1_imagin;
    std::cout << "Enter the real part of number2: ";
    std::cin >> nu2_real;
    std::cout << "Enter the imaginary part of number2: ";
    std::cin >> nu2_imagin;

    //Get number's value:
    number1.SetReal(nu1_real);
    number1.SetImaginary(nu1_imagin);

    number2.SetReal(nu2_real);
    number2.SetImaginary(nu2_imagin);

    //Compute sum:
    sum = number1 + number2;
    std::cout << "Sum is " << sum.GetReal() << " + " << sum.GetImaginary() << "i";
    return 0;
}
