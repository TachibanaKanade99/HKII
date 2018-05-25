#include<iostream>
#include<math.h>

#define MAX_SIZE 6
using namespace std;
/*
int main() {
	//Enter value of array:
	double a[MAX_SIZE];
	for (int i = 0; i < MAX_SIZE; i++) {
		cout << "Enter value :" << endl;
		cin >> a[i];
		//Chaeck if input has negative number
		if (a[i] < 0) {
			return 0;
		}
		//Check if input has character:
		while (1) {
			if (cin.fail()) {
				cin.clear();
				cin.sync();
				cout << "Enter non_negative number and not the character type: " << endl;
				return 0;
			}
			//Break the While loop if don't have character from input
			else {
				break;
			}
		}
	}
	for (int i = 0; i < MAX_SIZE; i++) {
		cout <<"a["<<i<<"] = "<< a[i] << endl;
	}
	//Print the average result
	double result = 0;
	//Print standard deviation
	double dev = 0;
	for (int i = 0; i < MAX_SIZE; i++) {
		result += a[i];
	}
	result /= (MAX_SIZE);
	cout << "Result is " << result << endl;
	//Print the standard deviation
	double sum = 0;
	for (int i = 0; i < MAX_SIZE; i++) {
		sum += pow((a[i] - result), 2);
	}
	dev += sqrt((1.0 / (MAX_SIZE)) * sum);
	cout << "Sum is " << sum << endl;
	cout << "The standard deviation is " << dev << endl;
	cout << endl;
	//Invert the array
	for (int i = 0; i < (MAX_SIZE / 2); i++) {
		double val = a[i];
		a[i] = a[(MAX_SIZE - 1) - i];
		a[(MAX_SIZE - 1) - i] = val;
	}
	cout << "The invert array of a["<<MAX_SIZE<<"] is " << endl;
	for (int i = 0; i < MAX_SIZE; i++) {
		cout << a[i] << endl;
	}
	system("pause");
	return 0;
}
*/