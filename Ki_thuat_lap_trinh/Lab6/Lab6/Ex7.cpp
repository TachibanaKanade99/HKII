#include<iostream>
#include<random>
using namespace std;
/*
int main() {
	int N;
	cout << "Enter the length of vector N: ";
	cin >> N;
	double* vector_1 = new double[N];
	double* vector_2 = new double[N];

	//Random the real number values: 
	random_device rd; // Will be used to obtain a seed for the random number
	mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
	uniform_real_distribution<double> dis(-10, 10);

	// Create the value for vector 1:
	for (int i = 0; i < N; i++) {
		vector_1[i] = dis(gen);
		cout << "vector 1[" << i << "] = " << vector_1[i] << endl;
	}
	cout << endl << endl;

	//Create the value for vector 2:
	for (int i = 0; i < N; i++) {
		vector_2[i] = dis(gen);
		cout << "Vector 2[" << i << "] = " << vector_2[i] << endl;
	}

	//Compute the length of vector 1:
	double length_v1 = 0;
	for (int i = 0; i < N; i++) {
		length_v1 += vector_1[i] * vector_1[i];
	}
	length_v1 = sqrt(length_v1);
	cout << "The length of vector 1: " << length_v1 << endl;

	//Compute the length of vector 2:
	double length_v2 = 0;
	for (int i = 0; i < N; i++) {
		length_v2 += vector_2[i] * vector_2[i];
	}
	length_v2 = sqrt(length_v2);
	cout << " The Length of vector 2: " << length_v2 << endl;

	//Compute Dot product of vector 1 and vector 2: 
	double dot_product = 0;
	for (int i = 0; i < N; i++) {
		dot_product += vector_1[i] * vector_2[i];
	}
	cout << "Dot product of vector 1 and vector 2: " << dot_product << endl;

	//Delete the pointer of vector 1 (Free):
		delete[] vector_1;
		vector_1 = NULL;
	//Delete the pointer of vector 2 (Free):
		delete[] vector_2;
		vector_2 = NULL;


	system("pause");
	return 0;
}
*/