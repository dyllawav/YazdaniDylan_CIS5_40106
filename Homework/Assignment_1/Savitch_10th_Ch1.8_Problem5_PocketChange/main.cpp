/* 
 * Author: Dylan Yazdani
 * Date: 1/4/19
 * Purpose: Calculate cent worth of number of quarters nickels and dimes
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
    
    int cents;
    double variableQuarters, variableDimes, variableNickels;
    
    cout<<"Enter the number of Quarters, Dimes and Nickels\n";
    cout<<""<<endl;
 
    cin>>variableQuarters;
    cin>>variableDimes;
    cin>>variableNickels;
    
    cents = (variableQuarters * 25) + (variableDimes * 10) + (variableNickels * 5);
   
    cout<<variableQuarters<<" Quarters + "
        <<variableDimes<<" Dimes + "
        <<variableNickels<<" Nickels = "<<
        cents<<" cents!";
    
    return 0;
}