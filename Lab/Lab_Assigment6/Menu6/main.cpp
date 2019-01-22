/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: Lab Assignment 6 Menu
 * Created on January 21, 2019, 8:21 PM
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <cstdlib> //Random Library
#include <iomanip> //Format Library
#include <ctime>   //Time Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char wchProb;//Choose which problem
    
    do{
    //Initialize or input i.e. set variable values
    cout<<"\nMenu Program"<<endl;
    cout<<"Type 1 for Sum"<<endl;
    cout<<"Type 2 for Min Max"<<endl;
    cout<<"Type 3 for Pattern"<<endl;
    cout<<"Type 4 for PayInPennies"<<endl;
    cout<<"Type anything else to exit"<<endl;
    cin>>wchProb;
    
    //Solve Problems
    switch(wchProb){
        case '1':{
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
   

                    break;
               }
        case '2':{
            //Declare Variables
            int number = 0;                                    //input 
            int high;                                          //highest value
            int low;                                           //lowest value
            int counter = 0;                                   //stops at defined number
            //Initialize or input i.e. set variable values
            while (number != -99)                              //number cannot be -99
            {
                cin>>number;                                   //input
        
            if (counter == 0)                              //counter stops at 0 
            {
                high = number;                             //high is equal to number
                low = number;                              //low is equal to number
            }
            else 
            {   
                if (number > high && number != -99) //number is greater than high
                    high = number;
                else if (number < low && number != -99) //number is less than low 
                    low = number;
            }
                counter++;
            }
    
            //Display the outputs
            cout<<"Smallest number in the series is "<<low<<endl; //output
            cout<<"Largest  number in the series is "<<high;      //output 
            //Exit stage right or left!


                    break;
               }
        case '3':{
                    
            int i;                              //input
    
            cin>>i;                             //input a number
    
            for (int r = 1; r <= i; r++)        //loop increase
            {
        
            for (int c = 0; c < r; c++)     //loop increase 
            {
                cout << "+";                //plus signs displayed
            }
                cout << endl << endl;           //spaces
            }

    
            for (int r = i; r > 0; r--)         //loop decrease 
            {
       
            for (int c = 0; c < r; c++)     //loop increase 
            {
                cout << "+";                //plus signs displayed
            }
            if (r != 1)                     //cannot = 1
            {
                cout<<endl<<endl;           //spaces
            }
            }           

                    break;
               }
        case '4':{
             //Declare Variables
             int numDays = 1;                   //number of days
             float totalPay;                   //total amount of pay
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
                dayPay = money / 100;          //converting 1 penny to 0.01 dollars
                totalPay += dayPay;            //total pay calculation
                money *=2;                     //increases amount with increase in days
    
                }
    
             cout<<"Pay = $"<<fixed<<setprecision(2)<<totalPay; //result with 0.00 fixed
             //Exit stage right or left!

                    break;
               }
        default:    cout<<"Exiting Menu, no problem selected"<<endl;
    }
    }
    while(wchProb>='1'&&wchProb<='4');
    
    //Exit stage right or left!
    return 0;
}

