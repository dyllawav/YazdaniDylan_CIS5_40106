/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: MIN MAX
 * Created on January 18, 2019, 2:04 PM
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
    int number = 0;                                    //input 
    int high;                                          //highest value
    int low;                                           //lowest value
    int counter = 0;                                   //stops at defined number
    //Initialize or input i.e. set variable values
    while (number != -99)                              //number cannot be -99
    {
        cin>>number;                                   //input
        
        if (counter == 0)                              //counter stops at 0 
        {
            high = number;                             //high is equal to number
            low = number;                              //low is equal to number
        }
        else 
        {
            if (number > high && number != -99) //number is greater than high
                high = number;
            else if (number < low && number != -99) //number is less than low 
                low = number;
        }
        counter++;
    }
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<low<<endl; //output
    cout<<"Largest  number in the series is "<<high;      //output 
    //Exit stage right or left!
    return 0;
}
