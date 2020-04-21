// CPlusPlusLearn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int getMax(int a, int b) {
    if (a > b) {
        return a;
    }
    else
    {
        return b;
    }
}

int calculate(int a, int b, char function) {
    if (function == '+') {
        return a + b;
    }
    else if (function == '-') {
        return a - b;
    }
    else if (function == '*') {
        return a * b;
    }
    else if (function == '/') {
        return a / b;
    }
}

int main()
{
    int a,b;
    char operatorToBeUsed;
    cout << "Enter First Number" << endl;
    cin >> a;

    cout << "Enter Second Number" << endl;
    cin >> b;

    cout << "Enter Operator" << endl;
    cin >> operatorToBeUsed;

    cout << "Result is " << calculate(a, b, operatorToBeUsed);
}
