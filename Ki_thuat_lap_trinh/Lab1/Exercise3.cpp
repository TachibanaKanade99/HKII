#include<iostream>
#include<iomanip>
using namespace std;
int main () {
	cout<< left << setw(5) <<"#"<<setw(15)<< "Name"<<setw(10)<< "Math"<< "English"<<endl;
	cout<< left << setw(5) <<"001"<<setw(15)<< "Nguyen Van A"<<setprecision(2)<< fixed <<setw(10)<< 3.5<<8.0<<endl;
	cout<< left << setw(5) <<"002"<<setw(15)<< "Le Thi B"<< setprecision(2)<< fixed <<setw(10)<<7.0<<6.3<<endl;
	return 0;  
}
