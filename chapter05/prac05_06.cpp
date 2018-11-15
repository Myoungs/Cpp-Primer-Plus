/**
 * @Brief: calculate sales using 2D arrayy
 * @File: prac05_06.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/15
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
    int sales[3][12];
    int aSum = 0;
    int cSum[3];

    for (int j = 0; j < 3; j++){
        for (int i = 0; i < 12; i++) {
            cout << "In " << j+1 << " th year, sales for " << months[i] << " month is: ";
            cin >> sales[j][i];
            cSum[j] += sales[j][i];
        };
        aSum += cSum[j];
    }

    for (int i = 0; i < 3; i++) {
        cout << "In " << i+1 << " th year, sales is: " << cSum[i] << endl; 
    }
    
    cout << "The total sales is: " << aSum << endl;

    return 0;
}
