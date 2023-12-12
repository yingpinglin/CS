//Name: Ying Ping Lin 
//Email: yingping.lin69@myhunter.cuny.edu 
// Write a C++ program that asks the user for a whole number between -31 and 31 and prints out the number in "two's complement" notation, using the following algorithm:
// 1)Ask the user for a number, n.
// 2)If the number is negative, print a 1 and let x = 32 + n.
// 3)If the number is not negative, print a 0 and let x = n.
// 4)Let b = 16.
// 5)While b > 0.5:
//     1)If x >= b then print 1, otherwise print 0
//     2)Let x be the remainder of dividing x by b.
//     3)Let b be b/2.
// 6)Print a new line ('\n').

// A sample run:
// Enter a number:  8
// 001000
// Another run:
// Enter a number: -1
// 111111

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
