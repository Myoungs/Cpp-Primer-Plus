/**
 * @Brief: calculate the harmonic mean of two input_numbers
 * @File: prac07_01.cpp
 * @Author: Myoungs 
 * @Date: 2019/04/15
 * 
 */

#include <iostream>

// prototype
double getHarmonicMean(double x, double y);

int main(){
    std::cout << "Please enter two numbers(0 to exit): ";
    double x, y;
    
    while (std::cin >> x >> y && x != 0 && y != 0) {
        double harmonicMeanValue = getHarmonicMean(x, y);
        std::cout << "The harmonic mean of " << x << " and " 
                  << y << " is " << harmonicMeanValue << std::endl;
        std::cout << "Please enter two numbers(0 to exit): ";
    }
    std::cout << "Bye!" << std::endl;

    return 0;
}

// calculate the harmonic mean value
double getHarmonicMean(double x, double y) {
    double value = 2.0 * x * y / (x + y);

    return value;
}
