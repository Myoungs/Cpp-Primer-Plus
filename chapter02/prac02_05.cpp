/**
 * @Brief: convert celsius to fahrenheit
 * @File: prac02_05.cpp
 * @Author: Myoungs 
 * @Date: 2018/09/29
 * 
 */

#include <iostream>
using namespace std;
float cel2fah(float);

int main(){
    float celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    float fahrenheit = cel2fah(celsius);
    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit" << endl;

    return 0;
}

float cel2fah(float cel2fah){
    float fahrenheit = 1.8 * cel2fah + 32.0;

    return fahrenheit;
}
