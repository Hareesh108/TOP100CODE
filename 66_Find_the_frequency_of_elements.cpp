#include <iostream>

using namespace std;

void freq(int arr[], int size)
{
    bool check[size];
    for(int i=0; i<size; i++)
    {
        check[i] = 0;
    }
    for(int i=0; i<size; i++)
    {
        if(check[i] == 1)// Key Elements
            continue;
        int count = 1;
        for(int j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j]) //Frequency of elements
            {
                check[j] =1;
                count++;
            }
        }
        cout << "Frequency of " << arr[i] << " is: " << count << endl;
    }
    
}

int main()
{
    int arr[100],n;
    cout << "Enter the numbers of elements: ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    freq(arr, n);

    return 0;
}