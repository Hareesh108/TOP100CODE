#include <iostream>

using namespace std;

int main()
{
    int a ,b,c;
    cout << "Enter any three int numbers: " <<endl;
    cin >> a >> b >> c;
    if(a>b && a> c)
        cout << a << " is the Greater"<< endl;
    else if (a<b && c<b)
        cout << b << " is a Greater"<< endl;
     else if (a<c && b<c)
        cout << c << " is a Greater"<< endl;
    else 
        cout << "Three are same!" <<endl;
    
    return 0;
}
