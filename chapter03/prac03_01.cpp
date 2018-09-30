/**
 * @Brief: convert inch to foot
 * @File: prac03_01.cpp
 * @Author: Myoungs 
 * @Date: 2018/09/30
 * 
 */

#include <iostream>
using namespace std;

const double convert_factor = 12.0;

int main(){
    double height;
    cout << "Enter your height: _____\b\b\b\b\b";
    cin >> height;
    double foot = height / convert_factor;
    cout << "Your height is: " << foot << " feets" << endl;

    return 0;
}
