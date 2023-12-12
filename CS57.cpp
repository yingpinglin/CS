//Name: Ying Ping Lin 
//Email: yingping.lin69@myhunter.cuny.edu 
//Write a C++ program that asks the user for the month of the year (as a number), and prints
// "Happy Winter" if it is strictly before 3 or strictly larger than 11,
// "Happy Spring" if it is 3 or greater, but strictly before 7, and
// "Happy Summer" if it is 7 or greater, but strictly before 9, and
// "Happy Fall" otherwise.
    
// A sample run:
// Enter month (as a number):  12
// Happy Winter
// Another sample run:
// Enter month (as a number):  8
// Happy Summer
// And another run:
// Enter month (as a number):  11
// Happy Fall

#include <iostream>
using namespace std;

int main()
{
    int month;
    cout<<"Enter (number) month: ";
    cin >> month;
    
    if(month > 2 and month < 7)
    {
        cout << "Happy Spring!";
    }
    else if(month >= 7 && month < 9)
    {
        cout << "Happy Summer!";
    }
    else if(month >= 9 and month < 12)
    {
        cout << "Happy Fall!";
    }
    else if(month == 12 || month <= 2)
    {
        cout << "Happy Winter!";
    }
    else
    {
        cout << "There is only 12 month in 4 seasons. Please enter a number from 1 to 12.";
    }
    return 0;
}
