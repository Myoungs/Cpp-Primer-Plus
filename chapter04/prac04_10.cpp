/**
 * @Brief: calcute average score
 * @File: prac04_10.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/09
 * 
 */

#include <iostream>
#include <array>
using namespace std;

int main(){
    array<double, 3> scores;
    cout << "Please enter your first 40m running score: " << endl;
    cin >> scores[0];
    cin.get();
    cout << "Please enter your second 40m running score: " << endl;
    cin >> scores[1];
    cin.get();
    cout << "Please enter your third 40m running score: " << endl;
    cin >> scores[2];
    cin.get();

    int score_sum = 0;
    for (int i = 0; i < 3; i++) {
        score_sum += scores[i];
    }

    float average_score = score_sum / 3.0;
    cout << "Your 40m running average score is: " << average_score << endl;

    return 0;
}
