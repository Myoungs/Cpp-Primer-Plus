/**
 * @Brief: calculate sales
 * @File: prac05_05.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/12
 * 
 */

#include <iostream>
#include <string>
using namespace std;

const int Months = 12;

int main(){
    string months[Months] = 
    {
        "Jan", 
        "Feb",
        "Mar",
        "Apr",
        "May",
        "Jun",
        "Jul",
        "Aug",
        "Sep",
        "Oct",
        "Nov",
        "Dec"
    };
    int sales[12];
    int aSum = 0;

    for (int i = 0; i < 12; i++) {
        cout << "Enter sales for " << months[i] << " month: ";
        cin >> sales[i];
        aSum += sales[i];
    };

    for (int i = 0; i < 12; i++) {
        cout << "Sales for " << months[i] << " is: " << sales[i] << endl; 
    }
    cout << "The total sales is: " << aSum << endl;

    return 0;
}
