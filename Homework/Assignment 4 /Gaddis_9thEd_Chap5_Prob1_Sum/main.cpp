/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: Total Sum
 * Created on January 18, 2019, 1:22 PM
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
    //Set the random number seed
    
    //Declare Variables
    int num = 0;
    int sum = 0;

    //Initialize or input i.e. set variable values
    cin>>num;
    
    //Map inputs -> outputs
    while (num < 0)
    {
        cout<<"Please enter positive integer ONLY.\n";
        cin>>num;
    }
    
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    //Display the outputs
    cout<<"Sum = "<<sum;
    //Exit stage right or left!
    return 0;
}