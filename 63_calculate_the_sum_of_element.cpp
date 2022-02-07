#include <iostream>

using namespace std;

int sum(int arr[], int n)
{
    int add=0;
    for(int i=0; i<n; i++)
    {
        add = add + arr[i];
    }
    return add;
}

int main()
{
    int n;
    cout << "Enter an elements: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout << "Sum of all elememts: " << sum(arr,n);

    return 0;
}




// int main(){

//     int n;
//     cin>>n;
    
//     int a[n], sum = 0;

//     for (int i = 0 ; i < n; i++)
//       cin>>a[i];
      
//     for(int i = 0; i < n; i++)
//       sum += a[i];
    
//     cout<<sum ;
// }