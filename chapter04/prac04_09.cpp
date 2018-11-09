/**
 * @Brief: new a struct array
 * @File: prac04_09.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/09
 * 
 */

#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar{
    char brand[20];
    double weight;
    int calorie;
};

int main(){
    CandyBar *snacks = new CandyBar[3];
    
    strcpy(snacks->brand, "Dove");
    snacks->weight = 2.3;
    snacks->calorie = 350;

    strcpy((snacks+1)->brand, "Lindt");
    (snacks+1)->weight = 2.3;
    (snacks+1)->calorie = 350;

    strcpy((snacks+2)->brand, "Godiva");
    (snacks+2)->weight = 2.3;
    (snacks+2)->calorie = 350;

    for (int i = 0; i < 3; i++){
        cout << "Brand: " << snacks[i].brand << endl;
        cout << "Weight: " << snacks[i].weight << endl;
        cout << "Calorie: " << snacks[i].calorie << endl;
    }

    return 0;
}
