/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: Pattern
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
    
    int i;
    
    cin>>i;
    
    for (int r = 1; r <= i; r++)
    {
        
        for (int c = 0; c < r; c++)
        {
            cout << "+";
        }
        cout << endl << endl;
    }

    
    for (int r = i; r > 0; r--)
    {
       
        for (int c = 0; c < r; c++)
        {
            cout << "+";
        }
        if (r != 1)
        {
            cout<<endl<<endl;
        }
    }
   
    
    return 0;
}