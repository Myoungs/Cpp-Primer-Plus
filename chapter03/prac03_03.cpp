/**
 * @Brief: show the latitude with degrees
 * @File: prac03_03.cpp
 * @Author: Myoungs 
 * @Date: 2018/09/30
 * 
 */

#include <iostream>
using namespace std;
double show_latitude(int, int, int);

int main(){
    int degrees;
    int minutes;
    int seconds;

    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: "; 
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    double ans = show_latitude(degrees, minutes, seconds);
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << ans << " degrees" << endl;

    return 0;
}

double show_latitude(int degrees, int minutes, int seconds){
    const int factor = 60;

    int seconds_cnt = factor * (factor * degrees + minutes) + seconds;
    double degrees_cnt = double(seconds_cnt) / (factor * factor);

    return degrees_cnt;
}
