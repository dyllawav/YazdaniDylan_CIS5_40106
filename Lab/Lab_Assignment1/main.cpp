/* 
 * File:   main.cpp
 * Author: dylan yazdani
 * Purpose: calculate the military budget as a percentage of the federal budget 
 * Created on January 6, 2019, 3:28 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    float milBdgt,fedBdgt,mlPrcnt;

    milBdgt = 7.0e11f;    //Military Budget = 700 Billion   

    fedBdgt = 4.1e12f;    //Federal Budget  = 4.1 Trillion
    
    cout << "The Military Budget is "      
         << (milBdgt/fedBdgt) * 100 << "";     
    cout << " percent of the Federal Budget.";
    
    return 0;
}

