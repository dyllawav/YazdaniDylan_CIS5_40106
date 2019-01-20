/* 
 * Author: Dylan Yazdani
 * Date: 1/4/19
 * Purpose: Miles Per Gallon
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {

    double gallonsGas = 15;
    double milesTraveled = 375;
    double mpg;
    
    cout<<"Input number of gallons and distance traveled.\n";
    
    cin>>gallonsGas;
    cin>>milesTraveled;
    
    cout<<"Your MPG is "
        <<milesTraveled / gallonsGas<< "";
    
    mpg = milesTraveled / gallonsGas;
    
    return 0;
}
