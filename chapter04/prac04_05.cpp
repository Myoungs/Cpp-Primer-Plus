/**
 * @Brief: state a struct
 * @File: prac04_05.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/06
 * 
 */

#include <iostream>
using namespace std;

struct CandyBar{
    string brand;
    double weight;
    int calorie;
};

int main(){
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calorie: " << snack.calorie << endl;

    return 0;
}
