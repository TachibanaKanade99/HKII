#include <iostream>
#include <math.h>
#include <sstream>
#include <cstring>

using namespace std;

int Convert(int n){
    double binary;
    if (n == 0){
        return binary = 0;
    }
    else{
        return n % 2 + 10 * (Convert(n / 2));
    }
}


int main(){
    stringstream ss;
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;
    ss << Convert(n);
    string str = ss.str();
    cout << str;
    return 0;
}
