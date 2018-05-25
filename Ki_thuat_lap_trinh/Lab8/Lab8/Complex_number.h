#ifndef Complex_number
#define Complex_number

//Define a class and component here - Declare constructor and destructor:

class Number{
    private:
    double real_num;
    double imaginary_num;
    public:
    Number();
    ~Number();
    double SetReal(double real);
    double SetImaginary(double imaginary);
    Number operator+(const Number& other);
    double GetReal();
    double GetImaginary();
};


#endif