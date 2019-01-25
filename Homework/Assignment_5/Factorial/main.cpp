/* 
 * Author: Dylan Yazdani
 * Created on 1/24/19
 * Purpose: Find the factorial of a number  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int n);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n;                    //input
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype "
            "found in the template for this problem.\n";
    cout<<"Input the number for the function.\n";
    cin>> n;
    cout<<n<<"! = "<<fctrl(n);
    //Exit stage right!
    return 0;
}
    int fctrl(int n)
{
    if(n > 1)
        return n * fctrl(n - 1);
    else
        return 1;
}