#include <iostream>


using namespace std;


int reversed = 0;
int invert(int n){
    if (n != 0){
        reversed = n  % 10  + reversed  * 10;
        n /= 10;
        return invert(n);
    }
    return reversed;
}


int main(){
    int N;
    cout << "Enter number: ";
    cin >> N;
    cout << "The reversed number is " << invert(N);

    return 0;
}
