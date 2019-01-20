/* 
 * File:   main.cpp
 * Author: dylan yazdani
 * Purpose: Calculates how much diet soda will kill you based on your weight
 * Created on January 10, 2019, 10:23 AM
 */
//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const float CNVLBGR=4.53592e2f;//Conversion from lbs to grams

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
      //Declare Variables
    float   wD,//Weight in lbs of the dieter
            ms,//Mass of sweetener that killed mouse in grams
            mm,//Mass of mouse in grams
            msp,//Mass of soda pop in grams
            csp;//Soda pop concentration
    int nCans;//Number of cans 
    
    //Initialize or input i.e. set variable values
    ms=5;     //5 grams that will kill the mouse
    mm=35;    //35 grams mass of mouse
    msp=350;  //350 grams in a soda pop can
    csp=.001f;//1/10 of 1%
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>wD;
    
    //Map inputs -> outputs
    nCans=wD*CNVLBGR*ms/(mm*msp*csp);
    
    //Display the outputs
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<nCans;
    cout<<" cans";

    //Exit stage right or left!
    return 0;
}