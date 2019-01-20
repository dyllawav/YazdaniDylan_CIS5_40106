/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: To calculate a 7.6% retroactive increase in salary
 * Created on January 10, 2019, 10:44 AM
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
    //Declare Variables
    const float payI = .076;
    float pas, //previous annual salary
          rap, //retroactive pay
          nas, //new annual salary
          nms; //new monthly salary
         
    //Initialize or input i.e. set variable values
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Input previous annual salary.\n";
    cin>>pas;
    
    //Map inputs -> outputs
  
    rap=(pas*payI)/2;
    nms=(pas/12)+rap/6;
    nas=nms*12;
    
    //Display the outputs
    cout<<"Retroactive pay    = $  "<<rap<<endl;
    cout<<"New annual salary  = $"<<nas<<endl;
    cout<<"New monthly salary = $  "<<nms;
   
    //Exit stage right or left!
    return 0;
}
