#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the elememts: ";
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int small = arr[0];
    for (int i=0 ; i<n; i++)
    {
        if(arr[i] < small)
        {
            small = arr[i];
        }
    }
    cout << "Smallest number in array:" << small;

    return 0;
}