/**
 * @Brief: convert format
 * @File: prac03_07.cpp
 * @Author: Myoungs 
 * @Date: 2018/10/01
 * 
 */

#include <iostream>
using namespace std;

int main(){
    const double km_miles = 62.14;
    const double gallon_L = 3.875;
    double e_fuel;

    cout << "Enter fuel consumption in Europe format(L/100km): ";
    cin >> e_fuel;
    
    double u_fuel = gallon_L / e_fuel * km_miles;
    cout << "Convert fule consumption in US format is(miles/gallon): " << u_fuel << endl;

    return 0;
}
