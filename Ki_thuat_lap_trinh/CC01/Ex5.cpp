#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main(){
    char word[256];
    cout << "Enter the sentence: ";
    cin.getline(word, 256);

    string str(word);
    cout << str << endl;
    stringstream  stream(str);
    unsigned int count = 0;
    while (stream >> word){
        count++;
    }
    cout << "Number of word is: " << count;

    return 0;
}
