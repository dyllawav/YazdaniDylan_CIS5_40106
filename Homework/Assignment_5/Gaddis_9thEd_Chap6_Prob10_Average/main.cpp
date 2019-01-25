/* 
 * Author: Dylan Yazdani
 * Created on January 24, 2019, 6:10 PM
 * Purpose: a program that calculates the average of a group of test scores, 
 *          where the lowest score in the group is dropped.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int getScre(int tstScre,int i,int &total);
float calcAvg(int,int);
int fndLwst(int scrArry[5]);

int main()
{
    int scrArry[5];
    int tstScre = 0;
    float avg = 0.0f;
    int lwst = 0;
    int total = 0;
    
    cout<<"Find the Average of Test Scores\n";
    cout<<"by removing the lowest value.\n";
    cout<<"Input the 5 test scores.\n";
    cin>>tstScre;
    
    
    for (int i = 1; i <=5; i++)
    {
        tstScre = getScre(tstScre,i,total);
        scrArry[i-1] = tstScre;
    }
    
    lwst = fndLwst(scrArry);
    avg = calcAvg(lwst,total);

    cout<<"The average test score = "<<fixed<<setprecision(1)<<avg;
    return 0;
}

float calcAvg(int lwst, int total) //finds and returns the average value
{
    int sum4 = 0;
    float avg = 0.0f;
    
    sum4 = total - lwst;
    avg = sum4 / 4.0f;
    return avg;
}

int fndLwst(int scrArry[5]) //finds the smallest value and subtracts it from total
{
    int smallest = scrArry[0];
    for (int i = 1; i <5; i++)
    {
        if (scrArry[i] < smallest)
            smallest = scrArry[i];
    }
    
    return smallest;
}

int getScre(int tstScre,int i,int &total) //gets score again if false
{
    cin>>tstScre;
    
    while (tstScre < 0 || tstScre > 100)
    {
        cin>>tstScre;
    }
    total += tstScre;
    return tstScre;
}