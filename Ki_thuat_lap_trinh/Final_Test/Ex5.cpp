#include <iostream>
#include <ctype.h>
#include <string>
#include <cstring>

using namespace std;

int main(){
    string str;
    cout << "Enter string: ";
    cin >> str;
    int N = str.length() + 1;
    char* n = new char[N];
    strcpy(n, str.c_str());

    for (int i = 0; i < N; i++){
        putchar (toupper(n[i]));
    }

    cout << n;

    //Delete pointer:
    delete[] n;
    n = NULL;
    return 0;
}
