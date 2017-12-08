/* 
 * File:   main.cpp
 * Author: Marcus Burton   
 * Created on November 28th 2017    
 * Purpose:  Use a binary search to compare users account number to those in the database
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <string>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
int binary(int [], int, int);
void marcsrt(int [], int);
void prntAry(int[], int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    int result =-1;
  
    //Initialize Variables
    int SIZE = 18;
   int accnt[] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 
                        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                        1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    //Input Data/Variables
   // before sort
    cout<<"Before sort"<<endl;
    prntAry(accnt,SIZE);
    //after sort
    cout<<"After sort"<<endl;
    marcsrt(accnt,SIZE);
    prntAry(accnt,SIZE);
    
   while(result==-1)
   {
    
    cout<<"Please enter your account number"<<endl;
    cin>>num;
    result = binary(accnt, SIZE, num);
   if(result ==-1)
        cout<<"Incorrect account number! Please re-enter"<<endl;
    else
        cout<<"It's a match! Your account number of "<<num<<"Matched our records"
               "account number of "<<accnt[result]<<"!"<<endl;
   
   
    
    }
    
    
    
    
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}

void prntAry(int a[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<a[i]<<" ";
        if(i%6==(6-1))cout<<endl;
    }
}

void marcsrt(int a[], int size)
{
    int scan;
    int minIndx;
    int minVal;
    
    for(scan = 0; scan <(size - 1); scan++)
    {
        minIndx = scan;
        minVal = a[scan];
        for(int indx = scan +1; indx<size; indx++)
        {
            if(a[indx]<minVal)
            {
                minVal = a[indx];
                minIndx = indx;
            }
        }
        a[minIndx] = a[scan];
        a[scan] = minVal;
    }
}


int binary(int list[], int size, int val) {
    int first = 0; // first array element
    int last = size-1; // last array element 
    int middle,// midpoint of search
     pos = -1; // position of search val 
    int total = 0; // count number of digits in val
    bool match = false; // flag
   
   
   
    
    while(!match && first <= last)
    {
        middle = (first + last) / 2; // calculate midpoint
        if(list[middle] == val) // start with midpoint
        {
            match = true;
            pos = middle;
        }
        else if(list[middle] > val) // if value is lower than half
            last = middle - 1;
        else 
            first = middle + 1; // if value is in upper half
        
    }
    
    
    return pos;
}