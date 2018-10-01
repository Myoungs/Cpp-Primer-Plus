/**
 * @Brief: show the percentage
 * @File: prac03_05.cpp
 * @Author: Myoungs 
 * @Date: 2018/10/01
 * 
 */

#include <iostream>
using namespace std;

int main(){
    long long w_population;
    long long u_population;

    cout << "Enter the world's population: ";
    cin >> w_population;
    cout << "Enter the population of the US: ";
    cin >> u_population;

    double perc = double(u_population) / double(w_population) * 100;
    cout << "The population of the US is " << \
            perc << "% " << "of the world population." << endl;

    return 0;
}
