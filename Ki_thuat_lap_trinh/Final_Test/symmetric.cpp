#include <iostream>

using namespace std;


bool IsSymmetric(int n) {
    if (n < 10) {
        return true;
    }

    int power_ten = 1;
    while (power_ten * 10 < n) {
        power_ten *= 10;
    }

    int first_digit = n / power_ten;
    int last_digit = n % 10;
    int mid = (n - first_digit * power_ten) / 10;

    if (first_digit == last_digit) {
        return IsSymmetric(mid);
    } else {
        return false;
    }
}


int main() {
    int n;
    cin >> n;
    if (IsSymmetric(n)) {
        cout << n << " is symmetric\n";
    } else {
        cout << n << " is not symmetric\n";
    }
    return 0;
}
