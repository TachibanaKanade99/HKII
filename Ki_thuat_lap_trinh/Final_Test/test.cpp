#include <iostream>
#include <string>
#include <math.h>
#include <sstream>


using namespace std;

int s = 0;
int f = 0;
string str;

bool IsSymmetric(int n){
    stringstream ss;
    ss << n;
    str = ss.str();
    s = n / pow(10, str.length() - 1);
    f = n % 10;
    if (s != f){
        return false;
    }
    else{
        return true;
    }
    n = n / 10;
    n = (int) n % (int) pow(10,(str.length() - 2));
    
    if (n > 9){
        return IsSymmetric(n);
    }
    return true;
}



int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (IsSymmetric(n) == true){
        cout << "Symmetric ";
    }
    else{
        cout << "Not Symmmetric ";
    }
    return 0;
}
