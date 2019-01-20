/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: House Insurance Calculator
 * Created on January 11, 2019, 11:18 AM
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
    float rcB, //replacement cost of building
          maP = .8,  //minimum amount percentage 
          mA;        //minimum amount that should be insured
    
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator\n";
    cout<<"How much is your house worth?\n";
    cin>>rcB;
    //Map inputs -> outputs
    mA = rcB*maP;
    //Display the outputs
    cout<<"You need $"<<mA;
    cout<<" of insurance.";
    //Exit stage right or left!
    return 0;
}