#include "Calculator.h"
#include <iostream>

using namespace std;

class Calculator {
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

    public:
        void runCalculator() {
            int a, b;
            char operatorToBeUsed;
            cout << "Enter First Number" << endl;
            cin >> a;

            cout << "Enter Second Number" << endl;
            cin >> b;

            cout << "Enter Operator" << endl;
            cin >> operatorToBeUsed;

            cout << "Result is " << calculate(a, b, operatorToBeUsed);
        }


        int getMax(int a, int b) {
            if (a > b) {
                return a;
            }
            else
            {
                return b;
            }
        }

};