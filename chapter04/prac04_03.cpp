/**
 * @Brief: combine first&last name
 * @File: prac04_03.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/06
 * 
 */

#include <iostream>
#include <cstring>
using namespace std;

const int strLen = 20;

int main(){
    char first_name[strLen];
    char last_name[strLen];
    char full_name[2*strLen];

    cout << "Enter your first name: ";
    cin.getline(first_name, strLen);
    cout << "Enter your last name: ";
    cin.getline(last_name, strLen);

    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);

    cout << "Here's the information in a single string: ";
    cout << full_name << endl;

    return 0;
}
