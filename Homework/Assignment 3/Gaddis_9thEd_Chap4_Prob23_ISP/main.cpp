/* 
 * File:   main.cpp
 * Author: dylan yazdani
 * Purpose: ISP bill calculator
 * Created on January 15, 2019, 6:35 PM
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char   package;
    double hours,
           billP,
           A,
           B,
           C;
         
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill\n";
    cout<<"Input Package and Hours\n";
    cin>> package, hours;
    A = 1;
    B = 2;
    C = 3;
    //Map inputs -> outputs
    switch (package)
    {
    case 'A' : 
    if (package = 1) //Package A
    if (hours > 10)
        {billP = 9.95 + (hours - 10) * 2;}
    else
        {billP = 9.95;}
        break;

    case 'B' :
    if (package = 2) //Package B
    if (hours > 20)
        {billP = 14.95 + (hours - 20) * 1;}
    else 
        {billP = 14.95;}
        break;

    case 'C' :
    if (package = 3) //Package C
        {billP = 19.95;}
    }
    
   
    //Display the outputs
    cout<<"Bill = $ "<<billP;
  
    //Exit stage right or left!
    return 0;
}
