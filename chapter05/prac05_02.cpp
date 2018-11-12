/**
 * @Brief: re-code list5.4 using array and long double
 * @File: prac05_02.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/12
 * 
 */

#include <iostream>
#include <array>
using namespace std;

const int arraySize = 100;

int main(){
    array<long double, arraySize> factorials;
    factorials[1] = factorials[0] = 1.0;

    for (int i = 2; i < arraySize; i++) {
        factorials[i] = i * factorials[i-1];
    };
    for (int i = 0; i < arraySize; i++) {
        cout << i << "! = " << factorials[i] << endl;
    };

    return 0;
}
