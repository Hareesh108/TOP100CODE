// Algorithm:-
// Take int number as input and store it in num
// To extract digits we have to use modulus operator (num%10) , this will give us digit at unit place
// For subsequent digits we have to update num as num=num/10, so unit digit will get removed from number
// Initialize sum=0
//  A do while loop is started
// Value of sum is incremented by remainder of num divide by 10 i.e. num % 10
//                                  sum+=num%10; 

// Divide num by 10 and store result in num itself   
//                                 num=num/10;

// Do this until num is not equal to 0
//                                 while(num!=0);

// sum is printed which is the output

//Sum of digits in a number
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter any num : ";

    cin>>num;

    do
    {
        sum+=num%10;
        num=num/10;

    }while(num!=0);

    cout<<"\nSum of digits in given integer is: "<<sum;
    return 0;

}