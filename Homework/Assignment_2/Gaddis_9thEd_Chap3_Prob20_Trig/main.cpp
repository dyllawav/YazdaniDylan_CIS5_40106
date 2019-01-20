/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: Input an angle to output sin,cos, and tan
 * Created on January 11, 2019, 12:04 PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
   
    
    float 
           angle, //angle entered in degrees
           sine,
           cosine,
           tangent,
            sineR,
            cosineR,
            tangentR;

    
    
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions\n";
    cout<<"Input the angle in degrees.\n";
    cin>>angle;
    
    //Map inputs -> outputs
    sine = (sin(angle * 3.1416/180));
    cosine = (cos(angle * 3.1416/180));
    tangent = (tan(angle * 3.1416/180));
  
    
    //Display the outputs
    
cout<<"sin("<<(angle)<<") = "<<fixed<<setprecision(4)<<sine<<endl;
cout<<"cos("<<setprecision(0)<<(angle)<<") = "<<setprecision(4)<<cosine<<endl;  
cout<<"tan("<<setprecision(0)<<(angle)<<") = "<<setprecision(4)<<tangent;
    
    //Exit stage right or left!
    return 0;
}
