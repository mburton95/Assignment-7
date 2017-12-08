/* 
 * File:   main.cpp
 * Author: Marcus Burton   
 * Created on November 28th 2017    
 * Purpose:  Use a linear search to compare users ID number to numbers in database
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
int linear(const int[], int, int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    int result =-1;
  
    //Initialize Variables
    const int SIZE = 18;
    const  int accnt[] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 
                 8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    //Input Data/Variables
   //While there's no match, keep checking.
    while(result==-1)
    {
    
    cout<<"Please enter your account number"<<endl;
    cin>>num;
    result = linear(accnt, SIZE, num);
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
int linear(const int list[], int size, int val)
{
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