#include<iostream>
#include<math.h>
#include<string>
#include<sstream>
#define max_dim 4
using namespace std;

/*
int main() {
	// Declare vector 1:
	double vector_1[max_dim];
	double* ptr1;
	ptr1 = &vector_1[0];

	//Declare vector 2:
	double vector_2[max_dim];
	double* ptr2;
	ptr2 = &vector_2[0];

	//Input string and assign to vector 1:
	string str;
	stringstream ss;
	getline(cin, str);
	ss.str(str);
	for (int i = 0; i < max_dim; i++) {
		ss >> ptr1[i];
	}

	//Input string and assign to vector 2:
	stringstream ss1;
	getline(cin, str);
	ss1.str(str);
	for (int i = 0; i < max_dim; i++) {
		ss1 >> ptr2[i];
	}

	//Print vector 1 and vector 2:
	cout << "Vector 1 is: " << endl;
	for (int i = 0; i < max_dim; i++) {
		cout << ptr1[i] << endl;
	}
	cout << endl << endl;
	cout << "Vector 2 is: " << endl;
	for (int i = 0; i < max_dim; i++) {
		cout << ptr2[i] << endl;
	}

	//Compute the length of vector 1:
	double length_v1 = 0;
	for (int i = 0; i < max_dim; i++) {
		length_v1 += ptr1[i] * ptr1[i];
	}
	length_v1 = sqrt(length_v1);
	cout << "The length of vector 1: " << length_v1 << endl;
	
	//Compute the length of vector 2:
	double length_v2 = 0;
	for (int i = 0; i < max_dim; i++) {
		length_v2 += ptr2[i] * ptr2[i];
	}
	length_v2 = sqrt(length_v2);
	cout << "Length of vector 2: " << length_v2 << endl;

	//Compute Dot product of vector 1 and vector 2: 
	double dot_product = 0;
	for (int i = 0; i < max_dim; i++) {
		dot_product += ptr1[i] * ptr2[i];
	}
	cout << "Dot product of vector 1 and vector 2: " << dot_product << endl;

	system("pause");
	return 0;
}
*/