// number is even or odd
#include<iostream>
using namespace std;
int main()
{
  cout<<"Enter a number: "; 
  int num; 
  cin>>num;
  
  //checking whether the number is even or odd
  if(num % 2 == 0)
  {
    cout<<num<<" is an even number";
  }
  else
  {
     cout<<num<<" is an odd number";
  }
  return 0;
}