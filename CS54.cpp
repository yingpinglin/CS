//Name: Ying Ping Lin 
//Email: yingping.lin69@myhunter.cuny.edu 
//Date: Dec 5, 2023 
//This program prints program 54
//Write a C++ program that will print "Mihi cura futuri" 10 times.

// The output of your program should be:
// Mihi cura futuri
// Mihi cura futuri
// Mihi cura futuri
// Mihi cura futuri
// Mihi cura futuri
// Mihi cura futuri
// Mihi cura futuri
// Mihi cura futuri
// Mihi cura futuri
// Mihi cura futuri    
#include <iostream> //necessary header file iostream, provides input/output stream functionality in C++
using namespace std; //allows us to use standard library functions and objects

int main() //starting point of main function aka entry point
{
    for(int i = 0; i < 10; i++) //a loop: iniialize variable i to 0, sets loop condition to i<10(runs excatly 10 times starting form 0), increments i by 1 after each iteration(code that needs repeating)
    {
        cout << "Mihi cura futuri" << endl; //(cout = object in iostream library to output string("Mihi cura futuri")) (operator[<<] used to insert string into output stream) (manipulator[endl] used to insert a newline character after each output
    } //closing brace to show end of the for loop
    return 0; //program executed successfully and returns value 0 to operating system
}
