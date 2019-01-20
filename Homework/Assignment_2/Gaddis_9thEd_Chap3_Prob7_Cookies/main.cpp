/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: Calculate number of calories consumed
 * Created on January 11, 2019, 11:09 AM
 */

//System Libraries
#include <iostream> 
#include <iomanip> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int cK,     //cookies
        tcC=75, //total calories in 1 cookie
        cC;     //calories consumed
    
    //Initialize or input i.e. set variable values
    cout<<"Calorie Counter\n";
    cout<<"How many cookies did you eat?\n";
    cin>>cK;
    //Map inputs -> outputs
    cC=cK * tcC;
    //Display the outputs
    cout<<"You consumed "<<cC;
    cout<< " calories.";

    //Exit stage right or left!
    return 0;
}