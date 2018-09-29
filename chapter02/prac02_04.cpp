/**
 * @Brief: show months according to your age
 * @File: prac02_04.cpp
 * @Author: Myoungs 
 * @Date: 2018/09/29
 * 
 */

#include <iostream>
using namespace std;
int age2months(int);

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    int months = age2months(age);
    cout << "Contains " << months << " months" << endl;

    return 0;
}

int age2months(int age){
    int months = 12 * age;
    
    return months;
}
