/* 
 * Author: Dylan Yazdani
 * Date: 1/4/19
 * Purpose: Average of Values
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

    double num1 = 1;
    double num2 = 2;
    double num3 = 3;
    double num4 = 4;
    double num5 = 5;
    
    cout<<"Input 5 numbers.\n";
    
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    cin>>num5;
       
    cout<<"The average is ";
    cout<<(num1 + num2 + num3 + num4 + num5)/5;
    
    return 0;
}
