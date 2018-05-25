#include<iostream>
#include<time.h>
#include<cstdlib>
#include<iomanip>

using namespace std;



/*
int main() {
	srand(time(NULL));
	int N;
	cout << "Enter N: ";
	cin >> N;

	//Generate the  N x N array:
	int** arr = new int*[N];
	for (int i = 0; i < N; i++) {
		arr[i] = new int[N];
	}

	//Generate the random integer the value for array:
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i < j) {
				arr[i][j] = 0;
			}
			else {
				if (i == j) {
					while (1) {
						arr[i][j] = (rand() % 21 + 0) - 10;
						if (arr[i][j] == 0) {
							arr[i][j] = (rand() % 21 + 0) - 10;
						}
						else {
							break;
						}
					}
				}
				else {
					arr[i][j] = (rand() % 21 + 0) - 10;
				}
			}
		}
	}
	cout << "The lower triangular matrix: " << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}

	//Generate the N dimension vector X and Y:
	int* vec_X = new int[N];
	int* vec_Y = new int[N];

	//Generate the random value for vector Y:
	for (int i = 0; i < N; i++) {
		vec_Y[i] = (rand() % 21 + 0) - 10;
	}
	cout << endl;
	cout << "The vector Y is " << endl;
	for (int i = 0; i < N; i++) {
		cout << setw(5) << vec_Y[i];
	}
	cout << endl;

	//Compute the matrix X:
	vec_X[0] = vec_Y[0] / arr[0][0];
	for (int i = 1; i < N; i++) {
		int sum = 0;
			for (int k = 0; k < i; k++) {
				sum += arr[i][k] * vec_X[k];
			}
			vec_X[i] = (vec_Y[i] - sum) / arr[i][i];
	}

	cout << endl;
	cout << "Vector X is " << endl;
	for (int i = 0; i < N; i++) {
		cout << setw(5) << vec_X[i];
	}
	cout << endl;

	//Delete the pointer:
	for (int i = 0; i < N; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	delete[] vec_X;
	delete[] vec_Y;

	system("pause");
	return 0;
}
*/