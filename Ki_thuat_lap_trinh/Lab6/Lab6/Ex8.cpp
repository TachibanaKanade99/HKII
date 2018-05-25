#include<iostream>
#include<random>
#include<iomanip>
using namespace std;

/*
int main() {
	int N;
	cout << "Enter N:";
	cin >> N;

	//Create the N*N matrix through pointer
	double** ptr = new double*[N];
	for (int i = 0; i < N; i++) {
		ptr[i] = new double[N];
	}

	//Generate random real number:
	random_device rd; // Will be used to obtain a seed for the random number
	mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
	uniform_real_distribution<double> dis(-40, 50);

	//Print the N*N matrix:
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			ptr[i][j] = dis(gen);
			cout << "a[" << i << "][" << j << "] = " << ptr[i][j] << endl;
		}
	}

	cout << endl << endl;

	//Print the array in matrix form:
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout <<setw(3) << ptr[i][j];
			cout << "   ";
		}
		cout << endl;
	}

	cout << endl << endl;
	cout << "The main diagonal of the matrix is: " << endl;
	// Print it diagonal:
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) {
				cout << setw(3) << ptr[i][j];
			}
			else {
				cout << setw(3) << "      ";
			}
		}
		cout << endl;
	}
	
	// Delete the pointer:
	for (int i = 0; i < N; i++) {
		delete[] ptr[i];
	}
	delete[] ptr;
	system("pause");
	return 0;
}
*/