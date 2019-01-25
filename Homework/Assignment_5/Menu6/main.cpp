/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: Assignment 6 Menu
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
int main(int argc, char** argv)
{
    //Declare Variables
    char wchProb;//Choose which problem
    
    do{
    //Initialize or input i.e. set variable values
    cout<<"\nMenu Program"<<endl;
    cout<<"Type 1 for isPrime"<<endl;
    cout<<"Type 2 for Min Max"<<endl;
    cout<<"Type 3 for Factorial"<<endl;
    cout<<"Type 4 for Present Value"<<endl;
    cout<<"Type anything else to exit"<<endl;
    cin>>wchProb;
    
    //Solve Problems
    switch(wchProb){
        
case '1':{
    int n, i;
    bool isPrime = true;
    //Initialize Variables
    cout<<"Input a number to test if Prime.\n";
    cin>>n;
    //Process/Map inputs to outputs
    for(i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
          isPrime = false;
          break;
        }
    }
    if (isPrime)
        cout <<n<<" is prime.";
    else
        cout <<n<<" is not prime.";

                    break;
               }
case '2':{
    //Declare Variables
    int x,y,z,max,min;
    //Initialize Variables
    cout<<"Input 3 numbers\n";
    cin>>x>>y>>z;
    
    //Process/Map inputs to outputs
    if ( x < y )
    {
        min = x;
        max = y;
    }
    else
    {
        min = y;
        max = x;
    }

    if ( z < min )
        min = z;
    else if ( z > max )
        max = z;
    //Output data
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;           
                    break;
               }
case '3':{

int fctrl(int n);//Function to write for this problem

//Declare Variables
    int n;                    //input
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype "
            "found in the template for this problem.\n";
    cout<<"Input the number for the function.\n";
    cin>> n;
    cout<<n<<"! = "<<fctrl(n);
    //Exit stage right!
    return 0;
}   
           

                    break;
               
case '4':{
    float psntVal(float,float,int);

    float F = 0; //future value
    float r = 0; //interest rate
    int n = 0;   //number of years
    float P = 0;
    
    cout<<"This is a Present Value Computation\n";
    cout<<"Input the Future Value in Dollars\n";
    cout<<"Input the Number of Years\n";
    cout<<"Input the Interest Rate %/yr\n";
    cin>>F>>n>>r;
    
    P = psntVal(F,r,n);
    
    cout<<"The Present Value = $"<<fixed<<setprecision(2)<<P;
    
    return 0;

float psntVal(float F, float r, int n);


    
    P = F / (powf(1 + (r * 0.01),n));
    
    return P;
}
            break;

        default:    cout<<"Exiting Menu, no problem selected"<<endl;
    }
    }
    while(wchProb>='1'&&wchProb<='4');
    
    //Exit stage right or left!
    return 0;
}

