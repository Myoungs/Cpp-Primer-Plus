/**
 * @Brief: state a struct array
 * @File: prac04_06.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/07
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
    CandyBar snacks[3] = {
        {"Dove", 2.3, 350},
        {"Lindt", 2.3, 350},
        {"Godiva", 2.3, 350}
    };

    for (int i = 0; i < 3; i++){
        cout << "Brand: " << snacks[i].brand << endl;
        cout << "Weight: " << snacks[i].weight << endl;
        cout << "Calorie: " << snacks[i].calorie << endl;
    }

    return 0;
}
