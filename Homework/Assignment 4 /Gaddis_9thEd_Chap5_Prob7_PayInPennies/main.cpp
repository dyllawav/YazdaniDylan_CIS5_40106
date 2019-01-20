/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dylanyazdani
 *
 * Created on January 18, 2019, 1:41 PM
 */

//System Libraries
#include <iostream>//Input/Output Library
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
    int numDays = 1;
    double totalPay;
    double dayPay;
    double money = 1;
    
    //Initialize or input i.e. set variable values
    cin>>numDays;
    //Map inputs -> outputs
    while (numDays < 1)
    {
        cout<<"Enter a positive value ONLY!\n";
        cin>>numDays;

    }
    
    for(int i = 1; i <= numDays; i++)
    {
        dayPay = money / 100;
        totalPay += dayPay;
        money *=2;
    
    }
    
    cout<<"Pay = $"<<fixed<<setprecision(2)<<totalPay;
    //Exit stage right or left!
    return 0;
}
