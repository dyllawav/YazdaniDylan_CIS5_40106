/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dylanyazdani
 *
 * Created on January 15, 2019, 8:51 PM
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.re. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed

    //Declare Variables
    char p1,p2;

    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game\n";
    cout<<"Input Player 1 and Player 2 Choices\n";
    cin>>p1;
    cin>>p2;
    //Map inputs -> outputs
    if (p1 == p2)
        cout<<"tie";
    else if ((tolower(p1) == 'p') && (tolower(p2) == 'r'))
        cout<<"Paper covers rock.";
    else if ((tolower(p2) == 'p') && (tolower(p1) == 'r'))
        cout<<"Paper covers rock.";
    else if ((tolower(p1) == 's') && (tolower(p2) == 'r'))
        cout<<"Rock breaks scissors.";
    else if ((tolower(p2) == 's') && (tolower(p1) == 'r'))
        cout<<"Rock breaks scissors.";
    else if ((tolower(p1) == 's') && (tolower(p2) == 'p'))
        cout<<"Scissors cut paper.";
    else if ((tolower(p2) == 's') && (tolower(p1) == 'p'))
        cout<<"Scissors cut paper.";

    //Display the outputs

    //Exit stage right or left!
    return 0;
}