// Algorithm
// Step 1. Start

// Step 2. Insert the number.

// Step 3. If the number is Zero then print “The number is Zero”

// Step4: If the number is greater than zero, then print, “The number is Positive”

// Step 5. Else print, “The number is Negative”

// Step 6. Stop

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter a number: "; 
  cin>>n;
  if(n==0)
    cout<<"The number is Zero"; 
  else if(n>0)
    cout<<"The number is Positive";
  else
    cout<<"The number is Negative";
}