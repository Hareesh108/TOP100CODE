#include <iostream>

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
    // for Ascending order
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int temp =0;
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;              
            }
        }
    }
    cout<<"Ascending order of an array : \n";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    //for Descending order
    for(int h=0; h<n; h++)
    {
        for (int p=h+1; p<n; p++)
        {
            int temp = 0;
            if(arr[h] < arr[p])
            {
                temp = arr[p];
                arr[p] = arr[h];
                arr[h] = temp;
            }
        }
    }

    cout <<"\n Descending order of an array : \n"; 
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}