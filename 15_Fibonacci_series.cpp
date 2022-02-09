#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int a = 0, b = 1;

    cout << a << " " << b << " ";
    
    int Next;
    
    for(int i = 2; i < num; i++){
        Next = a + b;
        a = b;
        b = Next;
        
        cout << Next << " ";
    }

    return 0;
}