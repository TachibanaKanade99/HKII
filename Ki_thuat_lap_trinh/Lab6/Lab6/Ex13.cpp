#include<iostream>
#include<iomanip>
using namespace std;


/*
int main() {
	int a, b;
	cout << "Enter the size of the matrix A: ";
	cin >> a >> b;
	int c, d;
	cout << "Enter the size of the matrix B: ";
	cin >> c >> d;

	while (1) {
		if (b != c) {
			cout << "The column of matrix A has to equal the row of the matrix B";
			cin >> b >> c;
		}
		else {
			break;
		}
	}

	//Create the matrix:
	double** matrix_a = new double*[a];
	for (int i = 0; i < a; i++) {
		matrix_a[i] = new double[b];
	}

	double** matrix_b = new double*[c];
	for (int i = 0; i < c; i++){
		matrix_b[i] = new double[d];
	}

	//Create the element for the matrix:
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << "Enter matrix_a[" << i << "][" << j << "] = ";
			cin >> matrix_a[i][j];
		}
	}


	cout << endl << endl;
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < d; j++) {
			cout << "Enter matrix_b[" << i << "][" << j << "] = ";
			cin >> matrix_b[i][j];
		}
	}

	//Print the matrix: 
	cout << endl << endl;
	cout << "The matrix A is " << endl;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << setw(5) << matrix_a[i][j];
		}
		cout << endl;
	}

	cout << endl << endl;
	cout << "The matrix B is " << endl;
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < d; j++) {
			cout << setw(5) << matrix_b[i][j];
		}
		cout << endl;
	}


	//Multiply between two matrix:
	double** result = new double*[a];
	for (int i = 0; i < a; i++) {
		result[i] = new double[d];
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < d; j++) {
			result[i][j] = 0;
		}
	}

	for (int i = 0; i < a; i++) {
		for (int n = 0; n < d; n++) {
			for (int j = 0; j < b; j++) {
					result[i][n] += matrix_a[i][j] * matrix_b[j][n];
			}
		}
	}

	//Print the result:
	cout << endl << endl;
	cout << "The result is " << endl;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < d; j++) {
			cout << setw(5) << result[i][j];
		}
		cout << endl;
	}


	//Delete the pointer:
	for (int i = 0; i < a; i++) {
		delete[] matrix_a[i];
	}
	delete[] matrix_a;
	matrix_a = NULL;

	for (int i = 0; i < c; i++) {
		delete[] matrix_b[i];
	}
	delete[] matrix_b;
	matrix_b = NULL;

	for (int i = 0; i < a; i++) {
		delete[] result[i];
	}
	delete[] result;
	result = NULL;

	system("pause");
	return 0;
}
*/