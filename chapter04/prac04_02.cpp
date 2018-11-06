/**
 * @Brief: replace char with string in programlist4.4
 * @File: prac04_02.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/06
 * 
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, dessert;

    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}
