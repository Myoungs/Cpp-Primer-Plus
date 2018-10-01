/**
 * @Brief: compute fuel consumption unit
 * @File: prac03_06.cpp
 * @Author: Myoungs 
 * @Date: 2018/10/01
 * 
 */

#include <iostream>
using namespace std;

int main(){
    double miles;
    double gallons;
    
    cout << "Enter your driving miles: ";
    cin >> miles;
    cout << "Enter your gallons usage: ";
    cin >> gallons;

    double fuel_con = miles / gallons;
    cout << "Your driving fuel consumption unit is " << \
            fuel_con << " miles per gallon." << endl;

    return 0;
}
