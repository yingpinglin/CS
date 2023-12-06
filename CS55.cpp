//Name: Ying Ping Lin 
//Email: yingping.lin69@myhunter.cuny.edu 
//Date: Dec 5, 2023 
//This program prints program 54
    
#include <iostream>
using namespace std;

int main(){
  int km, miles;
  cout <<"Enter number of kilometers: ";
  cin >> km;
  miles = 0,621371 * km;
  cout << "Covert kilmeters to miles: " << miles << endl;
  return 0;
}
