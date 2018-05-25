#include<iostream>
#include<string.h>
#include<sstream>
#include<math.h>
using namespace std;

#define MAX_DIMENSION 50

struct vector
{
	float value[MAX_DIMENSION];
	int ndimension;
};

const double pi = acos(-1);
//Vector length:
double vector_length1(vector v1){
	double result = 0;
	for (int i = 0; i < v1.ndimension; i++){
		result += v1.value[i] * v1.value[i];
	}
	result = sqrt(result);
	return result;
}
double vector_length2(vector v2){
	double result = 0;
	for (int i = 0; i < v2.ndimension; i++){
		result += v2.value[i] * v2.value[i];
	}
	result = sqrt(result);
	return result;
}
double dot_product(vector v1, vector v2){
	double dot_result = 0;
	for (int i = 0; i < v1.ndimension; i++){
		for (int j = 0; j < v2.ndimension; j++){
			dot_result += v1.value[i] * v2.value[j];
		}
	}
	return dot_result;
}
double cross_product(vector v1, vector v2){
	double result = 0;
	result = v1.value[1] * v2.value[2] - v2.value[1] * v1.value[2];
	result -= v1.value[0] * v2.value[2] - v2.value[0] * v1.value[2];
	result += v1.value[0] * v2.value[1] - v2.value[0] * v1.value[1];
	return result;
}
double angle(vector v1, vector v2){
	double result = 0;
	result += acos(dot_product(v1,v2)) / (vector_length1(v1) * vector_length2(v2));
	return 0;
}
double projection_length1(vector v1, vector v2){
	//Length of the projection of a on b:
	double result = 0;
	result += dot_product(v1,v2) / vector_length1(v1);
	return result;
}
double projection_length2(vector v1, vector v2){
	//Length of the projection of b on a:
	double result = 0;
	result += dot_product(v1, v2) / vector_length2(v2);
	return result;
}
/*
int main(){
	vector v1;
	vector v2;
	string str;
	stringstream ss;

	for (int i = 0; i < 3; i++){
        getline(cin, str);
	}

	getline(cin, str);
	ss.str(str);

    v1.ndimension = 0;
	while (ss >> v1.value[v1.ndimension]) {
		v1.ndimension++;
	}

	// Reset stringstream
	//ss.str(string());
	//ss.clear();
	//Create the second stringstream
	stringstream ss1;
	getline(cin, str);
	ss1.str(str);
    v2.ndimension = 0;
	while (ss1 >> v2.value[v2.ndimension]){
		v2.ndimension++;
	}
	//Compare dimension of two vector:
	if (v1.ndimension != v2.ndimension){
		cout<<"Dimension of vector 1: "<<v1.ndimension<<endl;
		cout<<"Dimension of vector 1: "<<v1.ndimension<<endl;
		cout<<"Error: Different dimension";
		return 0;
	}
	cout<<"Length of vector 1: "<<vector_length1(v1)<<endl;
	cout<<"Length of vector 2: "<<vector_length2(v2)<<endl;
	cout<<"Dot Product of vector 1 and 2: "<<dot_product(v1,v2)<<endl;
	cout<<"Cross Product of vector 1 and 2: "<<cross_product(v1, v2)<<endl;
	cout<<"Angle between vector 1 and vector 2: "<<angle(v1,v2)<<endl;
	cout<<"Length of the projection of a on b: "<<projection_length1(v1,v2)<<endl;
	cout<<"Length of the projection of b on a: "<<projection_length2(v1, v2)<<endl;
	system("pause");
	return 0;
}
*/

