/**
 * @Brief: new a struct
 * @File: prac04_08.cpp
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
    Pizza *pz = new Pizza;

    cout << "Enter the pizza diameter: ";
    cin >> pz->diameter;
    cin.get();
    cout << "Enter the company name: ";
    getline(cin, pz->name);
    cout << "Enter the pizza weight: ";
    cin >> pz->weight;

    cout << "Diameter: " << pz->diameter << endl;
    cout << "Company name: " << pz->name << endl;
    cout << "Weight: " << pz->weight << endl;

    delete pz;
    
    return 0;
}
