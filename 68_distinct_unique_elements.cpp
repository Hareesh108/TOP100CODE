// Program to count the distinct elements , In this Program we will find out the elements which are unique in the array. 

#include <iostream>

using namespace std;

int Distinct(int arr[], int n)      //Function Definition
{
   int i, j, count = 1;
   for (i = 1; i < n; i++)      //hold an array element
   {
      for (j = 0; j < i; j++)   
      {
         if (arr[i] == arr[j])    //Check for duplicate elements
         {
            break;             //If duplicate elements found then break
         }
      }
      if (i == j)
      {
         count++;     //increment the number of distinct elements
      }
   }
   return count;      //Return the number of distinct elements
}

int main()
{
    int n,c;
    cout << "Enter an elements: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    c = Distinct(arr,n);
    cout << "Unique or distinct nuumbers are: " << c;

    return 0;
}