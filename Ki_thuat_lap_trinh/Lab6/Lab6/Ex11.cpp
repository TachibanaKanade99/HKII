#include<iostream>
#include<random>
#include<iomanip>
using namespace std;


/*
int main() {
	int N;
	cout << "Enter N:";
	cin >> N;
	
	//Generate the array:
	double** arr = new double*[N];
	for (int i = 0; i < N; i++) {
		arr[i] = new double[N];
	}

	//Generate the random value in array:
	random_device rd; // Will be used to obtain a seed for the random number
	mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
	uniform_real_distribution<double> dis(-20, 20);
	
	cout << "The array is " << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = dis(gen);
			cout << left << arr[i][j] << "  ";
		}
		cout << endl;
	}

	//Genrate vector N:
	cout << "The vector is " << endl;
	double* vector = new double[N];
	for (int i = 0; i < N; i++) {
		vector[i] = dis(gen);
		cout << left << vector[i] << "  ";
	}

	//Calculate the multiplication between vector and array:
	double* result = new double[N];
	for (int i = 0; i < N; i++) {
		result[i] = 0;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			result[i] += vector[i] * arr[i][j];
		}
	}
	cout << endl;
	cout << "The multiplication between vector is " << endl;
	for (int i = 0; i < N; i++) {
		cout << left << result[i] << "  ";
	}
	cout << endl;


	//Delete pointer:
	for (int i = 0; i < N; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	delete[] vector;
	delete[] result;

	system("pause");
	return 0;
}
*/
