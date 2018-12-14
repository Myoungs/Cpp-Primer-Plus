/**
 * @Brief: read and count words using string
 * @File: prac05_09.cpp
 * @Author: Myoungs 
 * @Date: 2018/12/15
 * 
 */

#include <iostream>
using namespace std;

const int strLen = 100;

int main(){
    string word;
    cout << "Enter words (to stop, type the word done):" << endl;

    int count = 0;
    char delimiter[] = "done";
    cin >> word;
    while (word != delimiter) {
        count ++;
        cin >> word;
    }

    cout << "You entered a total of " << count << " words." << endl;

    return 0;
}
