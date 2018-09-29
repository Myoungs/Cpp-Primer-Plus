/**
 * @Brief: convert long to mali
 * @File: prac02_02.cpp
 * @Author: Myoungs 
 * @Date: 2018/09/29
 * 
 */

#include <iostream>
using namespace std;
int dis2mali(int);

int main(){
    int distance;
    cout << "Enter the distance: ";    
    cin >> distance;
    int mali = dis2mali(distance);
    cout << distance << "distance = ";
    cout << mali << "malis." << endl;

    return 0;
}

int dis2mali(int distance){
    int malis = 220 * distance;
    
    return malis;
}
