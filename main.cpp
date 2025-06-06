#include <iostream>
#include "utilities.h"


using namespace std;


int main(){
    cout << "Count Vowells" << endl;
    cout  >> "Enter a word" << endl;
    string word;
    cin >> word;
    cout << countVowells(word);
    return 0;
}