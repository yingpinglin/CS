//Name: Ying Ping Lin 
//Email: yingping.lin69@myhunter.cuny.edu 
//Date: Dec 11, 2023 
//This program prints program 58
//Write a C++ program that asks the user for a year, and continue asking until the number entered that is 2018 or earlier.

// A sample run:
// Enter year: 2023
// Year must be 2018 or earlier
// Enter year: 2025
// Year must be 2018 or earlier
// Enter year: 2000
// You entered:  2000
#include <iostream>
using namespace std;

int main() {
  int year;
  cout << "Enter a year: ";
  cin >> year;
  while (year > 2018) {
    cout << "Year must be 2018 or after 2018.";
    cout << "\n Enter year: ";
    cin >> year;
    cout << year;
  }
  return 0;
}
