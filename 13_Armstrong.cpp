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

bool armstrong(int num, int len){

    int sum = 0, temp, digit;
    temp = num;

    while(temp != 0)
    {
        // extract digit
        digit = temp % 10;

        // add power to sum
        sum = sum + pow(digit,len);
        temp /= 10;
    }

    return num == sum;
}

int main()
{
    int num,n;
    cout << "Enter a number: ";
    cin >> num;

    n = length(num);
    cout<<"Order: " << n << endl;

    if(armstrong(num,n))
       cout << num<< " is Armstrong";
    else 
        cout << num << " is not Armstrong";

    return 0;
}