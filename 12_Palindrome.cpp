#include <iostream>

using namespace std;

int main()
{
    int num, rem, reverse=0;
    cout << "Enter a number: ";
    cin >> num;
    int temp = num;
    while(num != 0)
    {
      rem = num % 10;
      reverse = reverse * 10 + rem;
      num /= 10;
    }
    if(temp == reverse)
        cout << "A number is palindrome";
    else
        cout<< "A number is not a Palindrome";

    return 0;
}