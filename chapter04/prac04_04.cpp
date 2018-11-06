/**
 * @Brief: combine first&last name
 * @File: prac04_04.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/06
 * 
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    string first_name, last_name;

    cout << "Enter your first name: ";
    getline(cin, first_name);
    cout << "Enter your last name: ";
    getline(cin, last_name);

    string full_name = last_name + ", " + first_name;

    cout << "Here's the information in a single string: ";
    cout << full_name << endl;

    return 0;
}
