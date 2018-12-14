/**
 * @Brief: loop *
 * @File: prac05_10.cpp
 * @Author: Myoungs 
 * @Date: 2018/12/15
 * 
 */

#include <iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row - i - 1; j++) {
            cout << ".";
        }
        for (int k = row - i - 1; k < row; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
