#include <iostream>
#include <time.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(){
    srand(time(NULL));
    int M, N;
    cout << "Enter M and N: ";
    cin >> M >> N;

    //Create the array:
    double** arr = new double*[M];
    for (int i = 0; i < M; i++){
        arr[i] = new double[N];
    }

    //Random value:

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            arr[i][j] = rand() % 20 + 1;
        }
    }

    //Print the array:
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            cout << setw(5) << arr[i][j];
        }
        cout << endl;
    }
    cout << endl << endl;

    //Print minimum value:
    double mini = arr[0][0];
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            //mini = arr[i][j];
            if (arr[i][j] > mini){
                mini = arr[i][j];
            }
        }
    }

    cout << "Minimum value is " << mini << endl;

    //Print the average value:
    double sum = 0;
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            sum += arr[i][j];
        }
    }
    sum = sum / (M + N);
    cout << "The average sum is " << sum;


    //Delete pointer:
    for (int i = 0; i < M; i++){
        delete[] arr[i];
        arr[i] = NULL;
    }
    delete[] arr;
    arr = NULL;

    return 0;
}
