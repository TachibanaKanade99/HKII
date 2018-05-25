#include<iostream>
#include<iomanip>
#define N 50
using namespace std;


typedef struct matrix {
	double arr[N][N];
};

matrix operator+(matrix a, matrix b) {
	matrix result;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			result.arr[i][j] = a.arr[i][j] + b.arr[i][j];
		}
	}
	return result;
}

matrix operator+(matrix a, int n) {
	matrix add_result;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			add_result.arr[i][j] = a.arr[i][j] + n;
		}
	}
	return add_result;
}

matrix operator-(matrix a, matrix b) {
	matrix result;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			result.arr[i][j] = a.arr[i][j] - b.arr[i][j];
		}
	}
	return result;
}

matrix operator-(matrix a, int n) {
	matrix minus_result;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			minus_result.arr[i][j] = a.arr[i][j] - n;
		}
	}
	return minus_result;
}


/*
int main() {
	matrix a;
	matrix b;
	int n;
	cout << "Enter n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Enter matrix a[" << i << "][" << j << "] = ";
			cin >> a.arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Enter matrix b[" << i << "][" << j << "] = ";
			cin >> b.arr[i][j];
		}
	}

	matrix result;
	result = a + b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << result.arr[i][j];
		}
		cout << endl;
	}


	cout << endl << endl;
	matrix add_result;
	add_result = a + 12;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(5) << add_result.arr[i][j];
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
*/
