//Name: Ying Ping Lin 
//Email: yingping.lin69@myhunter.cuny.edu 
//Date: Dec 11, 2023 
//This program prints program 59
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "1";
        n = 32 + n;
    }
    else
    {
        cout << "0";
    }

    int b = 16;
    while (b > 0.5)
    {
        if (n >= b)
        {
            cout << "1";
            n %= b;
        }
        else
        {
            cout << "0";
        }
        b /= 2;
    }
    cout << endl;
    return 0;
}
