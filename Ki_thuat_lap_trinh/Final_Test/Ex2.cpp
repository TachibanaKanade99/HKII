#include<iostream>


using namespace std;

struct Student{
    float math;
    float english;
};

void func(struct Student student){
    double result = (student.math + student.english) / 2.0;
    cout << "The average result is " << result << endl;
    if (student.math > student.english){
        cout << "The Math score is bigger than English score and Math score is " << student.math << endl;
    }
    else{
        cout << "The English score is bigger than Math score and English score is " << student.english << endl;
    }
}


int main(){
    Student student;
    cout << "Enter your Math score: ";
    cin >> student.math;
    cout << "Enter your English score: ";
    cin >> student.english;
    func(student);
    return 0;
}
