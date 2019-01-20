/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: Book Worm Points Calculator 
 * Created on January 15, 2019, 4:34 PM
 */

//System Libraries
#include <iostream> 
#include <iomanip>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int books, //number of books bought
        points; //number of points from books bought
         
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points\n"
        <<"Input the number of books purchased this month.\n";
    cin>>books;
    //Map inputs -> outputs
    if(books == 0) {points = 0;}
    
    else if (books == 1) {points = 5;}

    else if (books == 2) {points = 15;}
    
    else if (books == 3) {points = 30;}
    
    else if (books == 4) {points = 60;}
    //Display the outputs
    cout<<"Books purchased =" << setw(3) << books << endl;
    cout<<"Points earned" << setw(4) <<"="<< setw(3) << points;
    //Exit stage right or left!
    return 0;
}

