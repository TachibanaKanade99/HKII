#include<iostream>
#include<iomanip>
using namespace std;

void reverse_arr(int n, double* arr) {
	//Reverse the array:
	for (int i = 0; i < n / 2; i++) {
		double a = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = a;
	}
}


int main() {
	int n;
	cout << "Enter N:";
	cin >> n;
	double* arr = new double[n];
	for (int i = 0; i < n; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	//Print the array:
	cout << "The array is " << endl;
	for (int i = 0; i < n; i++) {
		cout << left << setw(5) << arr[i];
	}
	cout << endl << endl;

	//Reverse the array 
	reverse_arr(n, arr);
	for (int i = 0; i < n; i++) {
		cout << setw(5) << arr[i];
	}
	cout << endl << endl;


	//Delete the array:
	delete[] arr;
	system("pause");
	return 0;
}

