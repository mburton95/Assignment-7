/* 
 * File:   main.cpp
 * Author: Marcus Burton   
 * Created on November 28th 2017    
 * Purpose:  Enter the rainfall of each month, calculate highest and lowest rainfall
 * months, and sort them from highest to lowest
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
void sortArray(int values[], string month[], int MONTHS);
void prntAry(int [], int );
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE = 12;
    int a[SIZE];
    string month[] = {"Jan" , "Feb" , "March" , "April" , "May" , "June" , "July",
                      "August" , "September" , "October" , "November" , "December" };
    float total=0;
    float avg=0;
    float high=0;
    float low=0;
    int mnthigh;
    int mnthlow;
    int MoIndx[SIZE];
    //Initialize Variables
    for(int i =0;i<12;i++)
    {
        
        do
        {
        cout<<"Please enter the value for the month "<<month[i]<<endl;
        cin>>a[i];
        
        
        
        total+=a[i];
        
        }while(a[i]<0);
        
    }
    avg=total/12.0;
    for(int i=0;i<12;i++)
    {
        if(a[i]>high)
        {
            high=a[i];
            mnthigh=i;
        }
        if(a[i]<low)
        {
            low=a[i];
            mnthlow=i;
        }
    }
    cout<<"TOTAL RAIN FALL: "<<total<<" INCHES"<<endl;
    cout<<"AVERAGE RAIN FALL: "<<avg<<" INCHES"<<endl;
    cout<<"MOST RAIN FALL FELL IN "<<month[mnthigh]<<endl;
    cout<<"LEAST RAIN FALL FELL IN "<<month[mnthlow]<<endl;
   
    
    //sort the array from least to smallest
    sortArray(a,month,SIZE);
    // sort it out low to high 
   
   
    return 0;
}

void sortArray(int values[], string month[], int MONTHS)
{
    int temp;
    string motemp;
    bool swap;
    do
    {
        swap = false;
        for(int count = 0; count < MONTHS - 1; count++)
        {
            if(values[count] < values[count + 1])
            {
                temp = values[count];
                motemp = month[count];
                values[count] = values[count + 1];
                month[count]=month[count+1];
                values[count + 1] = temp;
                month[count+1]=motemp;
                swap = true;
            }
            
        }
    } while(swap);

    cout << "\nHere are the months sorted from highest to lowest:\n";

    for (int index = 0; index  < MONTHS; index++)
        cout << values[index] << " "<<month[index]<<endl;;
}

