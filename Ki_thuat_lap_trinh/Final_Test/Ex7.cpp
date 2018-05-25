#include <iostream>


using namespace std;
int i = 0;
int c = 0;
int reverse = 0;
bool IsSymmetric(int n){
    //if (n < 9){
        //return true;
    //}
    reverse = n % 10 + reverse * 10;
    n /= 10;
    if (n != 0){
        return IsSymmetric(n);
    }
    else{
        if (c == reverse){
            return true;
        }
        else{
            return false;
        }
    }
}


int main(){
    int n;
    cout << "Enter the decimal: ";
    cin >> n;
    c = n;
    if (IsSymmetric(n) == true){
        cout << "Symmetric";
    }
    else{
        cout << "Not Symmetric";
    }
    return 0;
}
