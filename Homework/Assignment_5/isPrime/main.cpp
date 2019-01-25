/* 
 * Author: Dylan Yazdani
 * Created on 1/24/19
 * Purpose:  Determine if the input integer is prime or not.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
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

    return 0;

}
    

