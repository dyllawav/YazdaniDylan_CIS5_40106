/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: Calculate amount of Pennies made in dollars
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
    int numDays = 1;                   //number of days
    double totalPay;                   //total amount of pay
    double dayPay;                     //payment per day
    double money = 1;                  //dollar amount
    
    //Initialize or input i.e. set variable values
    cin>>numDays;                      //input number of days
    //Map inputs -> outputs
    while (numDays < 1)                //if input is less than one 
    {
        cout<<"Enter a positive value ONLY!\n"; //prompts to enter new number
        cin>>numDays;   //enter new number

    }
    
    for(int i = 1; i <= numDays; i++)  //loop of increase until it is equal
    {
        dayPay = money / 100;          //converting 1 pennie to 0.01 dollars
        totalPay += dayPay;            //total pay calculation
        money *=2;                     //increases amount with increase in days
    
    }
    
    cout<<"Pay = $"<<fixed<<setprecision(2)<<totalPay; //result with 0.00 fixed
    //Exit stage right or left!
    return 0;
}
