/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dylanyazdani
 *
 * Created on January 15, 2019, 5:34 PM
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
    float  balance, 
           checks, 
           checkFee,
           totalcheckFee,
           lowBalance,
           newBalance,
           monthlyFee = 10;
    
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees\n"
        <<"Input Current Bank Balance and Number of Checks\n";
    cin>>balance;
    cin>>checks;
    //Map inputs -> outputs
    if (balance < 400)
        {lowBalance = 15;}
    else if (balance == 400 && balance > 400)
        {lowBalance = 0;}
    
    if (checks < 20)
        {checkFee = .10;}
    else if (checks == 20 && checks < 40)
        {checkFee = .08;}
    else if (checks == 40 && checks < 60)
        {checkFee = .06;}
    else if (checks > 59)
        {checkFee = .04;}
    //Display the outputs
    totalcheckFee = checkFee * checks;
    newBalance = balance - totalcheckFee - monthlyFee - lowBalance;
    cout<<"Balance     $"<< setw(3) <<""<<fixed<<setprecision(2)<<balance<<endl;
    cout<<"Check Fee   $"<< setw(5) <<""<<setprecision(2)<<totalcheckFee<<endl;
    cout<<"Monthly Fee $"<< setw(4) <<""<<setprecision(2)<<monthlyFee<<endl;
    cout<<"Low Balance $"<< setw(5) <<""<<setprecision(2)<<lowBalance<<endl;
    cout<<"New Balance $"<< setw(3) <<""<<setprecision(2)<<newBalance;
    //Exit stage right or left!
    return 0;
}