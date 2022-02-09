#include <iostream>
#include<cmath>

using namespace std;

int length(int num)
{
    int length=0;
    while (num)
    {
        length++;
        num = num/10;
        
    }
    return length;
}

void armstrong(int low, int high){
    for (int num = low; num <= high; num++)
    {
        int sum=0;
        int temp = num;

        int n =  length(num);
        while(temp!=0)
        {
        int rem;
        rem = temp%10;
        sum = sum + pow(rem,n);
        temp = temp/10;
        }
        if(sum == num)
          cout << num << " ";

    }

}

int main()
{
    int low,high,n;
    cout << "Enter lower and upper int number: ";
    cin >> low >> high;

    armstrong(low,high);

}