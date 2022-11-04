#include<iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int i;

    for (i=2;i<number;i++)
    {
        if (number%i == 0)
        {
            cout << "Not prime" <<endl;
            break;
        }
        
    }
    if (i==number)
    {
        cout <<"Prime"<<endl;
    }

    return 0;
}

// using namespace std;
// #include <cmath>

// int main()
// {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     int i;

//     bool flag = 0;
//     for (i=2;i<= number / 2 ;i++)
//     {
//         if (number%i == 0)
//         {
//             cout << "Not prime" <<endl;
//             flag = 1;
//             break;
//         }
//     }
//     if (flag==0)
//     {
//         cout <<"Prime"<<endl;
//     }

//     return 0;
// }
