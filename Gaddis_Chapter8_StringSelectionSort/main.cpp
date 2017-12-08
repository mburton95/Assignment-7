/* 
 * File:   main.cpp
 * Author: Marcus Burton   
 * Created on November 28th 2017    
 * Purpose:  Sort an array of strings, tested with a driver
 *          program
 * 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
void prntAry(string[], int);
void namesrt(string[],int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int num=20;
    string names[num] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                         "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                         "Taylor, Terri", "Johnson, Jill",
                         "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                         "James, Jean", "Weaver, Jim", "Pore, Bob",
                         "Rutherford, Greg", "Javens, Renee",
                         "Harrison, Rose", "Setzer, Cathy",
                         "Pike, Gordon", "Holland, Beth"};
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    cout<<"BEFORE SORT"<<endl;
    prntAry(names,num);
    namesrt(names, num);
    cout<<endl;
    cout<<"AFTER SORT"<<endl;
    prntAry(names,num);
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
void prntAry(string names[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<names[i]<<endl;
    }
}
void namesrt(string names[],int size)
{
    int scan;
    int minIndx;
    string minval;
    for(scan=0;scan<size-1;scan++) // going through all array placements
    {
        //initializing the first position in array to minimum placement and value
        // in this case, being the earliest letter in the alphabet
        minIndx=scan; 
        minval=names[scan];
        for(int i = scan+1; i<size;i++) // comparing to next string value
        {
            // checking to see if names[i] comes first in the alphabet before the previous first in the alphabet
            if(names[i].compare(minval)<0) //I hope using.compare is okay at this level, I found about it online
            {
                minval=names[i];
                minIndx=i;
            }
        }
        names[minIndx]=names[scan];
        names[scan]=minval;
    }
}