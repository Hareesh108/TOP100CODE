#include<iostream>
using namespace std;

int main()
{
    int sum = 0 , upper, lower;
    cout << "Enter the lower limit: ";
    cin >> lower;
    cout << "Enter the upper limit: ";
    cin >> upper;
    
    //calculating sum of numbers in the given range
    for(int i = lower; i <= upper; i++)
    {
        sum += i;
        // sum = sum + 1;
    }

    cout<<"The Sum of Natural Numbers from " << lower << " to "<< upper << " is: "<< sum << endl;
    return 0;
}