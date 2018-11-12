/**
 * @Brief: calcute investment value
 * @File: prac05_04.cpp
 * @Author: Myoungs 
 * @Date: 2018/11/12
 * 
 */

#include <iostream>
using namespace std;

const int DaphnePrincipal = 100; 

int main(){
    double DaphneValue = 1.0, CleoValue = 1.0;
    int CleoPrincipal = 100;
    int countYear = 0;

    while (CleoValue <= DaphneValue) {
        countYear += 1;
        
        DaphneValue = 0.10 * DaphnePrincipal;
        CleoValue = 0.05 * CleoPrincipal;
        CleoPrincipal += CleoValue;
    };

    cout << "After " << countYear << " years, "
         << "Daphne: " << DaphneValue
         << ", Cleo: " << CleoValue << endl;
    
    return 0;
}
