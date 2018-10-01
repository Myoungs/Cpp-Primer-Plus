/**
 * @Brief: show time in specified format
 * @File: prac03_04.cpp
 * @Author: Myoungs 
 * @Date: 2018/10/01
 * 
 */

#include <iostream>
using namespace std;

int main(){
    const int sec_min = 60;
    const int sec_hou = 60 * 60;
    const int sec_day = 60 * 60 * 24;
  
    int seconds_cnt;
    cout << "Enter the number of seconds: ";
    cin >> seconds_cnt;

    int days = seconds_cnt / sec_day;
    int hours = (seconds_cnt % sec_day) / sec_hou;
    int minutes = (seconds_cnt % sec_hou) / sec_min;
    int seconds = seconds_cnt % sec_min;

    cout << seconds_cnt << " seconds = " << days << " days, " << \
            hours << " hours, " << minutes << " minutes, " << \
            seconds << " seconds." << endl;

    return 0;
}
