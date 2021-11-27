#include <iostream>
#include "Header.h"

int main()
{
    int number = 0;

    cout << "Please enter an integer to determine if it is even or odd based on your input: ";

    if (cin >> number)
    {
        if ((number % 2) == 0)
            cout << "The value " << number << " is even!";
        else
            cout << "The value " << number << " is odd!";
    }
    else
        cout << "The value is invalid!";

    return 0;
}