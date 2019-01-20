/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dylanyazdani
 *
 * Created on January 16, 2019, 9:52 AM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    double pumpPrice, fedTax=.184, salesTax=.800, capFee = .100, stateTax = .395;
    double basePrice, totalTax, percentTax, profit_bigOil ;
    
    cout<<"The amount it cost you per gallon the last time you put gas in your car.\n ";
    cin>>pumpPrice;
    
////pumpPrice = (basePrice + fedTax + stateTax + capFee) + (salesTax * basePrice);
    
    basePrice =(pumpPrice / salesTax)-(pumpPrice - fedTax - stateTax - capFee);
    
    totalTax = (pumpPrice - basePrice);
    percentTax = (totalTax / pumpPrice) * 100;
    cout<<fixed<<setprecision(2)<<"Percentage Gas Tax per Gallon = "
            <<percentTax<<"%\n";
    cout<<"Base price of gas per gallon = $"<<basePrice<<endl;
    
    cout<<"Total Tax per gallon = $"<<totalTax<<endl;
    
    profit_bigOil = basePrice * .065; //6.5% profit 
    cout<<"Oil Company Profit = $"<<profit_bigOil;
    
    return 0;
}

