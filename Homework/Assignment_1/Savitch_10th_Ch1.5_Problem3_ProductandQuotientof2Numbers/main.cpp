/* 
 * Author: Dylan Yazdani
 * Date: 1/4/19
 * Purpose: Find the Product and Quotient of 2 numbers
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
    
    int result;
    double num1, num2;
    
    cout<<"Input 2 integer numbers."<<endl;
    cin>>num1;
    cin>>num2;
    
    result = num1 * num2;

    cout<<""<<endl;
    cout<<"The product of ";
    cout<<num1<<"*"<<
          num2<<" = "<<
          result<<endl;
    cout<<""<<endl;
     
    result = num2 / num1;
    
    cout<<"The quotient of ";
    cout<<num2<<"/"<<
          num1<<" = "<<
          result;
          
    return 0;
}

