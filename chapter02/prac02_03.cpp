/**
 * @Brief: call functions
 * @File: prac02_03.cpp
 * @Author: Myoungs 
 * @Date: 2018/09/29
 * 
 */

#include <iostream>
using namespace std;
void mices(void);
void actions(void);

int main(){
    int car;
    mices();
    mices();
    actions();
    actions();

    return 0;
}

void mices(void){
    cout << "Three blind mice" << endl;
}

void actions(void){
    cout << "See how they run" << endl;
}
