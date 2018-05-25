#include <iostream>
#include <math.h>
#include <sstream>


using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    stringstream ss;
    ss << n;
    string str = ss.str();
    int d = str.length() - 2;
    n /= 10;
    cout << result;
    int result = n % (int) pow(10, d);
    //cout << d;
    return 0;
}
