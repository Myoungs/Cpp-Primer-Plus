/**
 * @Brief: show info in screen 
 * @File: prac04_01.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/06
 * 
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    string first_name, last_name;
    char grade;
    int age;

    cout << "What is your first name? ";
    getline(cin, first_name);
    cout << "What is your last name? ";
    cin >> last_name;
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    grade++;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}
