//  Range of prime number

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter a range a to b: ";
    cin >> a >> b ;
    int i,j;

    for (i = a;i<b;i++)
    {
        for(j=2;j<i;j++)
        {
            if (i%j == 0)
            {
                break;
            }
        }
        if(j==i)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}