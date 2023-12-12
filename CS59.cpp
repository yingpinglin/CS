//Name: Ying Ping Lin 
//Email: yingping.lin69@myhunter.cuny.edu 
//Date: Dec 11, 2023 
//This program prints program 59
//Write a complete C++ program that prints the change in population of the the United States:
//     p = p + Bp - Dp
// where p is the population, B is the birth rate of 12.4 births for every 1000 people (12.4/1000) each year, and D is the death rate of 8.4 for every 1000 people (8.4/1000). In 2017, the population of United States was 325.7 million. Your program should ask the user for the number of years and print expected population over those years starting from 2017. Each line should have: the year and the population (in millions).

// A sample run:
// Please enter the number of years: 10
// Year 2017  325.70
// Year 2018  327.00
// Year 2019  328.31
// Year 2020  329.62
// Year 2021  330.94
// Year 2022  332.27
// Year 2023  333.60
// Year 2024  334.93
// Year 2025  336.27
// Year 2026  337.61
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
