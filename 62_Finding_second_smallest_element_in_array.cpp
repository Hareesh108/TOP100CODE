#include <iostream>

using namespace std;

int second(int arr[], int m)
{
    for (int i=0; i<m-1; i++)
    {
        for (int j=i+1; j<m; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i=0; i<m; i++)
    {
        if(arr[i] != arr[0])
            return arr[i];
    }
    return -1;
}

int main()
{
    // int n;
    // cout << "Enter the elememts: ";
    // cin >> n;
    // int arr[n];
    // for (int i=0; i<n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Second smallest number is: " << second(arr,n);

    int arr[] = {15,4,88,8,45};
    cout << "Second smallest number is: " << second(arr,8);

    
    

    return 0;
}