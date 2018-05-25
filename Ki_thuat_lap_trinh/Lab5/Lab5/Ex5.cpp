#include<iostream>
#include<math.h>
#include<sstream>
#define M 4
#define N 3
using namespace std;

/*
int main(){
	istringstream ss;
	string str;
	double arr[N][M-1];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < (M - 1); j++) {
			arr[i][j] = 0;
		}
	}
	for (int i = 0; i < 2; i++) {
		getline(cin, str);
	}

	for (int i = 0; i < N; i++) {
		getline(cin, str);
		ss.str(str);
		for (int j = 0; j < (M - 1); j++){
			ss >> arr[i][j];
		}
		ss.str(string());
		ss.clear();
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < (M - 1); j++) {
			cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
		}
	}
	double X[N] = { arr[0][0], arr[1][0], arr[2][0]};
	for (int i = 0; i < N; i++) {
		cout << "X[" << i << "] = " << X[i] << endl;
	}

	double result[N];
	for (int i = 0; i < N; i++) {
		result[i] = 0;
		}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			result[i] += X[j] * arr[j][i];
		}
	}
	cout << "Result is : " << endl;
	for (int i = 0; i < N; i++) {
		cout<<"result["<<i<<"] = "<<result[i]<<endl;
	}
	//system("pause");
	return 0;
}
*/