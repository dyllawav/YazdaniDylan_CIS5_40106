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
    int number = 0;
    int high;
    int low;
    int counter = 0;
    //Initialize or input i.e. set variable values
    while (number != -99)
    {
        cin>>number;
        
        if (counter == 0)
        {
            high = number;
            low = number;
        }
        else 
        {
            if (number > high && number != -99)
                high = number;
                else if (number < low && number != -99)
                low = number;
        }
        counter++;
    }
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<low<<endl;
    cout<<"Largest  number in the series is "<<high;
    //Exit stage right or left!
    return 0;
}
