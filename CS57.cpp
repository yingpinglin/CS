#include <iostream>

using namespace std;

int main()
{
    int month;
    cout<<"Enter (number) month: ";
    cin >> month;
    
    if(month > 2 and month < 7){
        cout << "Happy Spring!";
    }
    else if(month >= 7 && month < 9){
        cout << "Happy Summer!";
    }
    else if(month >= 9 and month < 12){
        cout << "Happy Fall!";
    }
    else if(month == 12 || month <= 2){
        cout << "Happy Winter!";
    }
    else{
        cout << "There is only 12 month in 4 seasons. Please enter a number from 1 to 12.";
    }
    
    return 0;
}
