// Algorithm:-
// Step 1 : Ask the user to enter a  number which will denote the limit.

// Step 2 : Declare a variable to store the addition and initialize it with 0.

// Step 3 : Use a loop to perform iterations for adding natural numbers from 1 till the limit entered by the user.

// Step 4 : Use a statement for addition purpose.

// Step 5 : Print the result.


#include<iostream>
using namespace std;
int main() 
{ 
    int Number, i, Sum = 0;
    cout<<"\n Kindly Insert an Integer Variable: ";
    cin>>Number;

    //use for loop for these condition
    for(i = 1; i <= Number; i++)
    {
       Sum = Sum + i;
    }

    cout<<"Sum of Natural Numbers: "<< Sum;

    return 0;
}