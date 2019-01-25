/*
 * Author: Dylan Yazdani
 * Created on January 24, 2019, 5:20 PM
 * Purpose: Interest/Present Value Calculator
 */

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

float psntVal(float,float,int);
int main()
{
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
}

float psntVal(float F, float r, int n)
{
    float P;
    
    P = F / (powf(1 + (r * 0.01),n));
    
    return P;
}