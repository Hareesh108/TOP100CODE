#include <iostream>

using namespace std;

int duplicate(int arr[],int n)
{
    if(n==1 || n == 0){
        return n;
    }

    int k = 0;
    for(int i=0; i< n-1 ; i++)
    {
        if(arr[i] != arr[i+1])
            arr[k++] = arr[i];
    }

    arr[k++] = arr[n-1];

    return k;
}

int main()
{
    int arr[] = {10,15,15,20,25,25,25,30,30};
    int n = sizeof(arr)/sizeof (arr[0]);

    int r = duplicate(arr,n);

    for(int i = 0; i < r; i++)
    {
        cout<<arr[i] << " ";
    }

    return 0;
}