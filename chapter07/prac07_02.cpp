/**
 * @Brief: show average value of less than 10 golf scores
 * @File: prac07_02.cpp
 * @Author: Myoungs 
 * @Date: 2019/04/15
 * 
 */

#include <iostream>

const int MAX = 10;
// prototypes: input, show, calculate
int inputScores(int scores[], int max);
void showScores(const int scores[], int nums);
double getAverageScore(const int scores[], int nums);

int main(){
    int arr[MAX];
    int nums = inputScores(arr, MAX);

    if (nums) {
        showScores(arr, nums);
        double averageValue = getAverageScore(arr, nums);
        std::cout << "The average score is: " << averageValue << std::endl;
    } else {
        std::cout << "No input scores!" << std::endl;
    }

    return 0;
}

// input scores 
int inputScores(int scores[], int max) {
    std::cout << "Please enter less than 10 golf scores: " << std::endl;
    int count = 0;
    int score;
    while (count < max && std::cin >> score) {
        scores[count] = score;
        count++;
    }

    return count;
}

// show scores 
void showScores(const int scores[], int nums) {
    std::cout << "The golf scores: ";
    for (int i = 0; i < nums; i++) {
        std::cout << scores[i] << " ";
    }
    std::cout << std::endl;

    return;
}

// calculate the average score value 
double getAverageScore(const int scores[], int nums) {
    int sum = 0;
    for (int j = 0; j < nums; j++) {
        sum += scores[j];
    }
    double averageValue = sum / nums;

    return averageValue;
}

