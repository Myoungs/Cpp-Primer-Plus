/**
 * @Brief: calculate cumulative sum of input integer
 * @File: prac05_03.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/12
 * 
 */

#include <iostream>
using namespace std;

int main(){
    int intNum;
    int aSum = 0;
    
    do { 
        cout << "Please enter an integer: ";
        cin >> intNum;
        aSum += intNum;
        cout << "Current sum is: " << aSum << endl;
    } while (intNum != 0);
    
    cout << "Bye." << endl;

    return 0;
}
