#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define MAX_VERT 5
using namespace std;

struct vertice
{
	float x;
	float y;
};
/*
int main() {
	//Generate seed:
	srand(time(NULL));

	//Set struct array:
	vertice vertices[MAX_VERT];
	int N;
	cout << "Enter N:";
	while (1){
		 cin >> N;
		 if (cin.fail()) {
			 cin.clear();
			 cin.ignore(10000, '\n');
			 cin.sync();
			cout << "Enter the number: " << endl;
		 }
		else {
			break;
		}
	}
	while (1){
		if ((N <= 2) || (N > MAX_VERT)) {
			cout << "Enter again: ";
			cin >> N;
		}
		else {
			break;
		}
	}
	for (int i = 0; i < MAX_VERT; i++) {
		vertices[i].x = 0;
		vertices[i].y = 0;
		vertices[i].x += (rand() % 201 + 0) - 100;
		vertices[i].y += (rand() % 201 + 0) - 100;
	}
	for (int i = 0; i < MAX_VERT; i++) {
		cout << "vertices[" << i << "].x = " << vertices[i].x << endl;
		cout << "vertices[" << i << "].y = " << vertices[i].y << endl;
	}
	cout << endl;
	//Calculate perimeter
	float per = 0;
	for (int i = 0; i < MAX_VERT; i++) {
		per += sqrt(pow((vertices[i + 1].y - vertices[i].y), 2) + pow((vertices[i + 1].x - vertices[i].x), 2));
	}
	cout << "Perimeter is " << per << endl;
	//system("pause");
	return 0;
}
*/

