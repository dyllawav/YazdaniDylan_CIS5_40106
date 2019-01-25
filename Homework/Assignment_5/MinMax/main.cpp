/* 
 * Author: Dylan Yazdani
 * Created on 1/24/19
 * Purpose: a function that inputs 3 integers and returns both the min and maximum.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
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
    //Exit stage right!
    return 0;
}