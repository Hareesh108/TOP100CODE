// Algorithm:-
// Take year input from  user.
// The input is stored in an int type variable say year.
// year is checked for being a leap year or not with the following condition 
//              if( ((year % 4 == 0)&&(year % 100 != 0)) || (year % 400==0) )

// If the above condition is true then input is a leap year otherwise input is not a leap year.


//Leap year or not
#include<iostream>
using namespace std;

int main()
{
    //initialising variables
    int year;
    cout<<"Enter year to check: ";

    //user input
    cin>> year;
    
    //checking for leap year
    if( ((year % 4 == 0) && (year % 100 != 0)) || (year % 400==0))
    {
        //input is a leap year
        cout<< year <<" is a leap year";
    }
    else
    {
        //input is not a leap year
        cout<< year << " is not a leap year";
    }
    return 0;
}