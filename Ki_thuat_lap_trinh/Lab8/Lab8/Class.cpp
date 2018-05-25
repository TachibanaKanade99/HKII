#include<iostream>
#include<math.h>
//using namespace std;


class box{
	private:
	double box::height = 2.3;
	double box::breadth = 4.5;
	double length = 5.6;

	public:
	//Create the void function to access the private value:
	/*
	void setLength(){
		double _length;
		_length = length;
		cout<< "Length = " << _length << endl;
	}

	void setHeigth(){
		double _height = height;
		cout<< "Height = " << _height << endl;
	}

	void setBreadth(){
		double _breadth = breadth;
		cout<< "Breadth = " << _breadth << endl;
	}
	*/
	//Access direcly from the private:
	void setVolume(){
		double volume = height * breadth * length;
		cout << "Volume = " << volume << endl;
	}

};

int main(){
	box box1;
	//box1.setLength();
	//box1.setBreadth();
	//box1.setHeigth();
	box1.setVolume();

	return 0;
}