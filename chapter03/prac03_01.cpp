/**
 * @Brief: convert inch to foot&inch
 * @File: prac03_01.cpp
 * @Author: Myoungs 
 * @Date: 2018/09/30
 * 
 */

#include <iostream>
using namespace std;

const int convert_factor = 12;

int main(){
    int height;
    cout << "Enter your height: _____\b\b\b\b\b";
    cin >> height;
    int foot = height / convert_factor;
    cout << "Your height is: " << foot << " feet";
    int inch = height % convert_factor;
    cout << " and " << inch << " inches." << endl;

    return 0;
}
