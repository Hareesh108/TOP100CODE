#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter an elements: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j] && i != j)
            {
                cout << arr[i] << " ";
            }
        }
    }

    return 0;
}