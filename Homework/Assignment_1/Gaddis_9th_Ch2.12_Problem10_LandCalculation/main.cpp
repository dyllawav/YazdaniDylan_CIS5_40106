/* 
 * Author: Dylan Yazdani
 * Date: 1/4/19
 * Purpose: Calculates number of acres based on squarefeet
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
    
    double squareFeet = 157546;
    double acres = 43560; 
    
    cout<<"Input the number of square feet.\n";
    
    cin>>squareFeet;
    
    cout<<"The number of acres is "
        <<squareFeet / acres<<"";
        
    
    return 0;
}
