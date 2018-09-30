/**
 * @Brief: compute BMI value
 * @File: prac03_02.cpp
 * @Author: Myoungs 
 * @Date: 2018/09/30
 * 
 */

#include <iostream>
using namespace std;
double get_BMI(int, int, int);

int main(){
    int feet;
    int inches;
    int weights;

    cout << "Enter your feet: ";
    cin >> feet;
    cout << "Enter your inches: ";
    cin >> inches;
    cout << "Enter your weights(pounds): ";
    cin >> weights;

    double BMI_value = get_BMI(feet, inches, weights); 
    cout << "Your BMI value is: " << BMI_value << endl;

    return 0;
}

double get_BMI(int feet, int inches, int weights){
    const int feet_inches = 12;
    const double inches_meter = 0.0254;
    const double kgs_pounds = 2.2;

    double height = inches_meter * (feet_inches * feet + inches);
    double weights_kgs = weights / kgs_pounds;
    double BMI_value = weights_kgs / (height*height);

    return BMI_value;
}
