/**
 * @Brief: design a struct
 * @File: prac04_07.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/08
 * 
 */

#include <iostream>
using namespace std;

struct Pizza{
    string name;
    double diameter;
    double weight;
};

int main(){ 
    Pizza pz;

    cout << "Enter the company name: ";
    getline(cin, pz.name);
    cout << "Enter the pizza diameter: ";
    cin >> pz.diameter;
    cout << "Enter the pizza weight: ";
    cin >> pz.weight;

    cout << "Company name: " << pz.name << endl;
    cout << "Diameter: " << pz.diameter << endl;
    cout << "Weight: " << pz.weight << endl;

    return 0;
}
