//Name: Ying Ping Lin 
//Email: yingping.lin69@myhunter.cuny.edu 
//Date: Dec 11, 2023 
//This program prints program 59
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numYears;
    cout << "Enter number of years: ";
    cin >> numYears;
    double p = 325.70; //initial population
    double B = 12.4/1000;
    double D = 8.4/1000;
    cout << fixed << setprecision(2);
    for(int i = 2017; i < 2017 + numYears; i++) 
    {
        cout << "Year\t" << i << "\t"<< p << endl;
        p = p + B*p - D*p;
    }
}
