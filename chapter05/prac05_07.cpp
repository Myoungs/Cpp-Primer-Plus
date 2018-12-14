/**
 * @Brief: store car info
 * @File: prac05_07.cpp
 * @Author: Myoungs 
 * @Date: 2018/12/15
 * 
 */

#include <iostream>
using namespace std;

struct car{
    std::string producer;
    int year;
};

int main(){
    int totals;
    cout << "How many cars do you wish to catalog?";
    cin >> totals;
    cin.get();

    car * carInfo = new car[totals];

    for (int i = 0; i < totals; i++) {
        cout << "Car #" << i+1 << ":" << endl;
        cout << "Please enter the make: " ;
        getline(cin, carInfo[i].producer);
        cout << "Please enter the year made: ";
        cin >> carInfo[i].year;
        cin.get();
    }

    cout << "Here is your collection: " << endl;
    for (int j = 0; j < totals; j++) {
        cout << carInfo[j].year << " " << carInfo[j].producer << endl;
    }

    delete [] carInfo;

    return 0;
}
