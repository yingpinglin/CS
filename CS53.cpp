//Name: Ying Ping Lin 
//Email: yingping.lin69@myhunter.cuny.edu 
//Date: Dec 4, 2023 
//This program prints program 53
//Write a C++ program that prints "Hello, World!" and "Hello, C++!" in two separate lines to the screen.   
#include <iostream>               //header file:performs input and output operations in C++ (<>=system header file)
using namespace std;              //tells compiler to use std(standard) namespace like cout(common C++ library feature)
int main(){                      //line8-12 = main function(entry point) <--execution of program starts here
    cout <<"Hello, World!"\n;    //use cout object to output string "Hello, World!"(similar to line10)
    cout << "Hello, C++!"\n;    // << operator is used to send data to cout
    return 0;                    //exits main function & returns value 0 to operating system, indicating program executed successfully
    }
