#include<iostream>
#include<string.h>
using namespace std;

bool isSymmetric(string str, int i, int j){
	for (i = 0; i <= str.length(); i++){
		for (j = str.length() - 1;j >= 0; j--){
			if (str[i] == str[j]){
				return true;
			}
			else{
				return false;
			}
		}
	}
}
int main(){
	int i, j;
	string str;
	cout<<"Please enter string:";
	cin>>str;
	if (isSymmetric(str,i,j) == true){
		cout<<"String is symmetric"<<endl;
	}
	else{
		cout<<"String is not symmetric"<<endl;
	}
	return 0;
}