//Name: Ying Ping Lin 
//Email: yingping.lin69@myhunter.cuny.edu 
//Date: Dec 5, 2023 
//This program prints program 56
//Write a C++ program program that asks the user for a number and draws a triangle of that height and width using 'character graphics'.

// A sample run:
// Enter a number:  6
// *
// **
// ***
// ****
// *****
// ******
// Another sample run:
// Enter a number:  3
// *
// **
// ***
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
