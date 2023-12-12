//Name: Ying Ping Lin 
//Email: yingping.lin69@myhunter.cuny.edu 
//Write a C++ program that converts kilometers to miles. Your program should prompt the user for the number of kilometers and then print out the number of miles.
//A useful formula: miles = 0.621371* kilometers.    

#include <iostream>
using namespace std;

int main()
{
  float km, miles;
  cout <<"Enter number of kilometers: ";
  cin >> km;
  miles = 0.621371 * km;
  cout << "Convert kilmeters to miles: " << miles << endl;
  return 0;
}
