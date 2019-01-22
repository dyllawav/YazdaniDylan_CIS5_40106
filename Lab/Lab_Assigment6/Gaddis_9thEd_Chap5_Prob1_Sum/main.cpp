/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: Total Sum of a Number
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
    int num = 0; //number
    int sum = 0; //the sum of the numbers 

    //Initialize or input i.e. set variable values
    cin>>num;    //input a number
    
    //Map inputs -> outputs
    while (num < 0)         //if the number is less than 0 it does the following
    {
        cout<<"Please enter positive integer ONLY.\n"; //words are prompted 
        cin>>num;                                      //enter new number
    }
    
    for (int i = 1; i <= num; i++) //loop of increase until it is equal to number
    {
        sum += i; //adds up the numbers that are before and includes the input
    }
    //Display the outputs
    cout<<"Sum = "<<sum;           //final message, shows the end result
    //Exit stage right or left!
    return 0;
} 