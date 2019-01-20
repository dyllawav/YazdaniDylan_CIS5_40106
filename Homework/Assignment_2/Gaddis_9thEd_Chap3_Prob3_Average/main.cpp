/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: Calculates average of five inputs
 * Created on January 11, 2019, 9:57 AM
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
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1); //sets decimal point
    
    float num1, //test scores
          num2,
          num3,
          num4,
          num5,
          avN; //average test scores
    
    //Initialize or input i.e. set variable values
        cout<<"Input 5 numbers to average.\n";
        cin>>num1;
        cin>>num2;
        cin>>num3;
        cin>>num4;
        cin>>num5;
    //Map inputs -> outputs
   
    avN = (num1 + num2 + num3 + num4 + num5)/5;
   
    //Display the outputs
   
        cout<<"The average = "<<avN;
   
    //Exit stage right or left!
    return 0;
}