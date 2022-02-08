#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,j, count=1;
    cout << "Enter an elements: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        for (int j = 0; j < n; j++)
            if (i != j && arr[i] == arr[j])
                break;
        if (j == n)
            cout<< arr[i] << " ";
    }

    return 0;
}