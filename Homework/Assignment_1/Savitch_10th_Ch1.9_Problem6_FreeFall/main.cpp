/* 
 * Author: Dylan Yazdani
 * Date: 1/4/19
 * Purpose: Distance falling
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main() {

double acceleration = 32; 
double t;


cout<<"Input the time in free-fall\n";
cout<<""<<endl;
cin>>t; 

double tPow = (t * t);

cout<<"The distance = "
    <<(acceleration * tPow)/2<< " feet";

return 0; 

}