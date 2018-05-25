#include <iostream>
#include <random>
#include <iomanip>


using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution <> dis(1.0, 10.0);
    int N;
    cout << "Enter N: ";
    cin >> N;
    //Create the array:
    float* arr1 = new float[N];
    for (int i = 0; i < N; i++){
        arr1[i] = dis(gen);
    }


    float* arr2 = new float[N];
    for (int i = 0; i < N; i++){
        arr2[i] = dis(gen);
    }

    //Print array:
    cout << "Array 1 = ( " ;
    for (int i = 0; i < N; i++){
        cout << arr1[i] << "  ";
    }
    cout << " ) ";
    cout << endl << endl;
    cout << "Array 2 = ( " ;
    for (int i = 0 ; i < N; i++){
        cout << arr2[i] << "  ";
    }
    cout << " ) ";
    cout << endl << endl;

    //Compute their dot product:
    float result = 0;
    for (int i = 0; i < N; i++){
        result += arr1[i] * arr2[i];
    }
    cout << "Their dot product is " << result << endl;

    //Delete the pointer:
    delete[] arr1;
    arr1 = NULL;

    delete[] arr2;
    arr2 = NULL;

    return 0;
}
