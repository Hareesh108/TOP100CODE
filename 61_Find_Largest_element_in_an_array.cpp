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
    int large = arr[0];
    for (int i=0 ; i<n; i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];
        }
    }
    cout << "Largest number in array:" << large;

    return 0;
}