#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    int rev=0, rem;
    int temp = n;
    while (temp)
    {
        rem = temp%10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if(n == rev)
        return 1;

    return 0;
}

int main()
{
    int n;
    cout << "Enter the elements: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    sort(arr, arr+n);
    int result;

      for (int i = 0; i < n; i++)
    {

      if (isPalindrome (arr[i]))
	        result = arr[i];
    }

    cout << "\n The longest palindrome number is : " << result;

    return 0;
}