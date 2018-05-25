#include <iostream>
#include <iomanip>

using namespace std;

struct Number{
    int N;
    double* arr = new double[N];
};

void func(Number number){
    cout << "Enter N: ";
    cin >> number.N;
    while (number.N < 0){
        cout << "Enter the positive N: ";
        cin >> number.N;
    }
    cout << "N is " << number.N << endl;
    // Enter value for array:
    for (int i = 0; i < number.N;i++){
        cout << "arr[" << i << "] = ";
        cin >> number.arr[i];
    }

    //Print the array:
    cout << endl << endl;
    cout << "The array is" << endl;
    for (int i = 0; i < number.N; i++){
        cout << setw(5) << number.arr[i];
    }
}

int main(){
    Number number;
    func(number);
    //Delelte pointer:
    delete[] number.arr;
    number.arr = NULL;

}
