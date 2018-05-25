#include <iostream>
#include <math.h>
#include <sstream>
#include <stdio.h>
#include <string.h>


using namespace std;


const int N = 50; // may use #define instead

struct Vector{
    int dim;
    double entries[N];
};


double vec_length(Vector a) {
    double res = 0;
    for (int i = 0; i < a.dim; i++) {
        res += a.entries[i] * a.entries[i];
    }
    res = sqrt(res);
    return res;
}


double dot_product(Vector a, Vector b) {
    double res = 0;
    for (int i = 0; i < a.dim; i++) {
        res += a.entries[i] * b.entries[i];
    }
    return res;
}


double cross_product(Vector a, Vector b) {
    double res = a.entries[1] * b.entries[2] - a.entries[2] * b.entries[1];
    res -= a.entries[0] * b.entries[2] - a.entries[2] * b.entries[0];
    res += a.entries[0] * b.entries[1] - a.entries[1] * b.entries[0];
    return res;
}


double angle(Vector a, Vector b) {
    return acos(dot_product(a, b) / (vec_length(a) * vec_length(b)));
}


int main() {
    Vector a;
    Vector b;
    a.dim = 0;
    b.dim = 0;

    string input_line;
    stringstream ss;

    for (int i = 0; i < 3; i++) {
        getline(cin, input_line);
    }

    getline(cin, input_line);
    cout << input_line << endl;
    ss.str(input_line);

    while (ss >> a.entries[a.dim]) {
        a.dim++;
    }

    /* Reset stringstream */
    // Alternative: create a second stringstream object
    ss.str(string());
    ss.clear();

    getline(cin, input_line);
    cout << input_line << endl;
    ss.str(input_line);

    while (ss >> b.entries[b.dim]) {
        b.dim++;
    }

    if (a.dim != b.dim) {
        cout << "Error: different number of dimensions\n";
        return 0;
    }

    cout << "Length of a: " << vec_length(a) << "\n";
    cout << "Length of b: " << vec_length(b) << "\n";
    cout << "Dot product: " << dot_product(a, b) << "\n";
    cout << "Cross product: " << cross_product(a, b) << "\n";
    cout << "Angle (rad): " << angle(a, b) << "\n";

    return 0;
}
