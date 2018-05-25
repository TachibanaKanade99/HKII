#include<iostream>
#include<string>
using namespace std;

#define MAX 1

struct device
{
	string name[MAX];
	string ID[MAX];
	string function[MAX];
	double price[MAX];
};
/*
int main() {
	device guest;
	for (int i = 0; i < MAX; i++){
	cout << "Please enter your printer name: ";
	cin >> guest.name[i];
	cout << "Please enter the ID: ";
	cin >> guest.ID[i];
	cout << "Please enter function: ";
	cin >> guest.function[i];
	cout << "PLease eter price: ";
	cin >> guest.price[i];
	cout << endl;
}
	cout << endl;
	for (int i = 0; i < MAX; i++){
	cout << "Your printer is " << guest.name[i] << " and ID is " << guest.ID[i] << " and its function is " <<guest.function[i] << ". The price is " << guest.price[i] << endl;
}
	system("pause");
	return 0;
}
*/