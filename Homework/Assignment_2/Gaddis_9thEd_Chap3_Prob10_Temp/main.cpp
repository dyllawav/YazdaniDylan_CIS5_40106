/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 *
 * Created on January 11, 2019, 11:28 AM
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
    
    double  celsius,
            fahrenheit,
            celM = .555556; //celsius 5/9
    
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter\n";
    cout<<"Input Degrees Fahrenheit\n";
    cin>>fahrenheit;
    //Map inputs -> outputs
    celsius=(fahrenheit-32)*celM;
    //Display the outputs
    cout<<fixed<<setprecision(1);
    cout<<fahrenheit<<" Degrees Fahrenheit = "<<celsius<<" Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}