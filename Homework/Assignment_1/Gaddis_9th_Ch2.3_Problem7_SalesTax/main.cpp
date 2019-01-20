/* 
 * Author: Dylan Yazdani 
 * Date: 1/4/19
 * Purpose: Sales Tax Calculator
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
   
 double purchase = 95;
 
 cout << "Input price of purchase\n";
 cin >> purchase;
 
 double statetax = 0.04 * purchase;
 double countytax = 0.02 * purchase;
 double totaltax = statetax + countytax;
 
 cout << "The total sales tax is "
      << totaltax << "";

 
    return 0;
}