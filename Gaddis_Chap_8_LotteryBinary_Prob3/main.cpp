/* 
 * File:   main.cpp
 * Author: Marcus Burton   
 * Created on December 4th 2017, 8:40AM
 * Purpose:  Initiate an array with lottery numbers and lets user enter the winning number
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int size = 10;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int binary(const int [], int, int);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //declare variables
    int user;
    int result;
    //impliment variables
    int lotnum[size] = {13579, 26791, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93131};
    result = -1;

    //search the array for the user input
    while (result == -1) {
        cout << "Please enter your lottery numbers" << endl;
        cin>>user;
        result = binary(lotnum, size, user);

        //Process/Calculations Here
        //If linear returns -1, then the array was not matching
        if (result == -1)
            cout << "You did not win the lottery today!" << endl;
        else {
            //Otherwise results contain subscript of
            //the first 100 found in the array.
            cout << "It's a match! Your random numbers of " << user << " matches with"
                    "the actual lotto numbers of " << lotnum[result] << " !!!!" << endl;
        }

    }

    //Exit
    return 0;
}

int binary(const int list[], int size, int val) {
    int first = 0; // first array element
    int last = size-1; // last array element 
    int middle,// midpoint of search
     pos = -1; // position of search val 
    int total = 0; // count number of digits in val
    bool match = false; // flag
   
    for(int i = 0 ; i < size; i++)
   
    
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