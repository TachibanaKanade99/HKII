#include<iostream>
#include<cmath>
#define max 10
using namespace std;

/*
int main() {
	
	//Create 1D array:
	double arr[max];
	for (int i = 0; i < max; i++) {
		cout << "Enter a[" << i << "] = ";
		while (1) {
			cin >> arr[i];
			if (cin.fail()) {
				cin.clear();
				cin.ignore(1000, '\n');
				cin.sync();
				cout << "Enter number: ";
			}
			else {
				break;
			}
		}
		while (arr[i] < 0) {
			cout << "Enter non negative number: ";
			cin >> arr[i];
		}
	}

	// Calculate the average value and standard value:
	double aver_sum = 0;
	double dev = 0;

	for (int i = 0; i < max; i++) {
		aver_sum += arr[i];
	}
	aver_sum /= max;
	cout << "The average sum is: " << aver_sum << endl;

	for (int i = 0; i < max; i++) {
		dev += pow(arr[i] - aver_sum, 2);
	}
	dev = 1.0 / (max - 1) * dev;
	dev = sqrt(dev);
	cout << "The standard deviation is: " << dev << endl;

	system("pause");
	return 0;
}
*/