/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: Plus Sign Pattern
 * Created on January 18, 2019, 3:04 PM
 */


//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    int i;                              //input
    
    cin>>i;                             //input a number
    
    for (int r = 1; r <= i; r++)        //loop increase
    {
        
        for (int c = 0; c < r; c++)     //loop increase 
        {
            cout << "+";                //plus signs displayed
        }
        cout << endl << endl;           //spaces
    }

    
    for (int r = i; r > 0; r--)         //loop decrease 
    {
       
        for (int c = 0; c < r; c++)     //loop increase 
        {
            cout << "+";                //plus signs displayed
        }
        if (r != 1)                     //cannot = 1
        {
            cout<<endl<<endl;           //spaces
        }
    }
   
    
    return 0;
}