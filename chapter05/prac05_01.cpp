/**
 * @Brief: calculate sum between two integers
 * @File: prac05_01.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/12
 * 
 */

#include <iostream>
using namespace std;

int main(){
    int firstInteger, secondInteger;

    cout << "Please input the first integer: " << endl;
    cin >> firstInteger;
    cout << "Please input the second integer: " << endl;
    cin >> secondInteger;

    int asum = (firstInteger + secondInteger) * 
               (secondInteger - firstInteger + 1) / 2;

    cout << "sum is: " << asum << endl;

    return 0;
}
