/* 
 * File:   main.cpp
 * Author: Dylan Yazdani
 * Purpose: Menu Program
 * Created on January 15, 2019, 6:35 PM
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <cstdlib> //Random Library
#include <iomanip> //Format Library
#include <ctime>   //Time Library
#include <cmath>     //Math Library
#include <string>
#include <set>
#include <algorithm>
using namespace std;

//User Libraries
void print(const std::string& item)
{
    std::cout << item << std::endl;
}


//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVYRMN=12;//Conversion 12 months in a year
const float PERCENT=100;//Conversion to percentage
const float PENNIES=100;//Conversion to pennies
const float HALFPNY=0.005F;//Half a penny
const float CNVLBGR=4.53592e2f;//Conversion from lbs to grams

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char wchProb;//Choose which problem

    //Initialize or input i.e. set variable values
    cout<<"Menu Program"<<endl;
    cout<<"Type 1 for Gaddis 9thEd Chap4 Prob11 Books"<<endl;
    cout<<"Type 2 for Gaddis 9thEd Chap4 Prob12 BankCharges"<<endl;
    cout<<"Type 3 for Gaddis 9thEd Chap4 Prob23 ISP"<<endl;
    cout<<"Type 4 for Gaddis 9thEd Chap4 Prob8 SortNames"<<endl;
    cout<<"Type 5 for Savitch 9thEd Chap3 Prob1 RockPaperScissors"<<endl;
    cin>>wchProb;
    
    //Solve Problems
    switch(wchProb){
        case '1':{
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

                     break;
               }
        case '2':{
                     float  balance, 
                     checks, 
                     checkFee,
                     totalcheckFee,
                     lowBalance,
                     newBalance,
                     monthlyFee = 10;
    
                     //Initialize or input i.e. set variable values
                     cout<<"Monthly Bank Fees\n"
                     <<"Input Current Bank Balance and Number of Checks\n";
                     cin>>balance;
                     cin>>checks;
                     //Map inputs -> outputs
                     if (balance < 400)
                        {lowBalance = 15;}
                     else if (balance == 400 && balance > 400)
                        {lowBalance = 0;}
    
                     if (checks < 20)
                        {checkFee = .10;}
                     else if (checks == 20 && checks < 40)
                        {checkFee = .08;}
                     else if (checks == 40 && checks < 60)
                        {checkFee = .06;}
                     else if (checks > 59)
                        {checkFee = .04;}
                    
                     //Display the outputs
                     totalcheckFee = checkFee * checks;
                     newBalance = balance - totalcheckFee - monthlyFee - lowBalance;
                     cout<<"Balance     $"<< setw(3) <<""
                             <<fixed<<setprecision(2)<<balance<<endl;
                     cout<<"Check Fee   $"<< setw(5) <<""
                             <<setprecision(2)<<totalcheckFee<<endl;
                     cout<<"Monthly Fee $"<< setw(4) <<""
                             <<setprecision(2)<<monthlyFee<<endl;
                     cout<<"Low Balance $"<< setw(5) <<""
                             <<setprecision(2)<<lowBalance<<endl;
                     cout<<"New Balance $"<< setw(3) <<""
                             <<setprecision(2)<<newBalance;
                    break;
               }
        case '3':{
                        char   package;
                        double hours,
                               billP,
                               A,
                               B,
                               C;
         
    
                        //Initialize or input i.e. set variable values
                        cout<<"ISP Bill\n";
                        cout<<"Input Package and Hours\n";
                        cin>> package, hours;
                        A = 1;
                        B = 2;
                        C = 3;
                        //Map inputs -> outputs
                        switch (package)
                        {
                        case 'A' : 
                        if (package = 1) //Package A
                        if (hours > 10)
                            {billP = 9.95 + (hours - 10) * 2;}
                        else
                            {billP = 9.95;}
                        break;

                        case 'B' :
                        if (package = 2) //Package B
                        if (hours > 20)
                            {billP = 14.95 + (hours - 20) * 1;}
                        else 
                            {billP = 14.95;}
                        break;

                        case 'C' :
                        if (package = 3) //Package C
                            {billP = 19.95;}
                        }
    
   
                        //Display the outputs
                        cout<<"Bill = $ "<<billP;
                        break;
                        }
        
        
        
        case '4':{
                    std::set<std::string> sortedItems;

    

                    {
                    std::string name1, name2, name3;
                    std::cout <<"Sorting Names\n";
                    std::cout <<"Input 3 names\n";
                    std::cin >> name1;
                    std::cin >> name2;
                    std::cin >> name3;

                    sortedItems.insert(name1);
                    sortedItems.insert(name2);
                    sortedItems.insert(name3);
                    }

                    std::for_each(sortedItems.begin(), sortedItems.end(), &print);            
                    break;    
        }
        
        case '5':{
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
                    break;
                    }
        
        default:    cout<<"Exiting Menu, no problem selected"<<endl;
    }

    //Exit stage right or left!
    return 0;
}