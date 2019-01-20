/* 
 * Author: Dylan Yazdani
 * Date: 1/4/19
 * Purpose: Sum of Two Numbers
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    int result;
    double integer1, integer2;
    
    integer1=1;
    integer2=2;
    
    cout<<"Input 2 integer numbers"<<endl;
    cin>>integer1;
    cin>>integer2;
    
    result = integer1 + integer2;
    
    cout<<"The sum of ";
    cout<<integer1<<"+"<<
            integer2<<"="<<
            result;

   
    return 0;
}
