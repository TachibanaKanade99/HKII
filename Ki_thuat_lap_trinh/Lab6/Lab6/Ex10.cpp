#include<iostream>
#include<cstdlib>
#include<time.h>
#include<iomanip>
using namespace std;


/*
int main() {
	srand(time(NULL));
	int R;
	int C;
	cout << "Enter row: ";
	cin >> R;
	cout << "Enter column: ";
	cin >> C;

	//Generate the array: 
	unsigned int** arr = new unsigned int*[R];
	for (int i = 0; i < R; i++) {
		arr[i] = new unsigned int[C];
	}
	
	//Random the value for the array:
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			arr[i][j] = rand() % 256 + 0;
		}
	}
	// Print the value of array:
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}

	//Find the similar number in 2D array:
	//int count = 0;
	//for (int i = 0; i < R; i++) {
		//for (int j = 0; j < c; j++) {
			//for (int m = 0; m < R; m++) {
				//for (int n = 0; n < C; n++) {
					//if (arr[i][j] == arr[m][n]) {
						//count += 1;
					//}
				//}
			//}
		//}
	//}

	//Compute histogram:
	int histogram[256];
	for (int i = 0; i < 256; i++) {
		histogram[i] = 0;
	}

	for (int a = 0; a < 1; a++) {
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				for (int m = 0; m < R; m++) {
					for (int n = 0; n < C; n++) {
						if (arr[i][j] == arr[m][n]) {
							histogram[arr[i][j]] += 1;
							break;
						}
					}
				}
				cout << "histogram[" << arr[i][j] << "] = " << histogram[arr[i][j]] << endl;
			}
		}
	}

	//Delete pointer:
	for (int i = 0; i < C; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	system("pause");
	return 0;
}
*/


