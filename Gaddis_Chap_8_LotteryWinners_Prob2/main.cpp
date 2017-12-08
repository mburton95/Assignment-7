/* 
 * File:   main.cpp
 * Author: Marcus Burton   
 * Created on December 4th 2017, 8:40AM
 * Purpose:  Use linear search to compare users lottery numbers with those in the database
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int size = 10;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int linear(const int[], int, int);
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
        result = linear(lotnum, size, user);

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

int linear(const int list[], int size, int val) {
    int i = 0; //used as a subscript to search array
    int pos = -1; // To record position of search value
    bool match = false; // flag to indicate if value was found

    while (i < size && !match) {
        if (list[i] == val) // if the value is found
        {
            match = true;
            pos = i; //record the values subscript
        }
        i++; // Go to the next element
    }
    return pos; // returns the position, or -1
}