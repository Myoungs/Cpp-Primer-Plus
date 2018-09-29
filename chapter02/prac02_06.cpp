/**
 * @Brief: convert light year to astronomical unit
 * @File: praco2_06.cpp
 * @Author: Myoungs 
 * @Date: 2018/09/29
 *
 */

#include <iostream>
using namespace std;
float lig2astro(float);

int main(){
    float lightYear;
    cout << "Enter the number of light years: ";
    cin >> lightYear;
    float astroUnit = lig2astro(lightYear);
    cout << lightYear << " light years = " << astroUnit << " astronomical units." << endl;

    return 0;
}

float lig2astro(float lightYear){
    float astroUnit = 63240 * lightYear;

    return astroUnit;
}
