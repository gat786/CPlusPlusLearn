#include<iostream>

using namespace std;

class Pointers{
    /*
    driver code
    Pointers pters = Pointers();
    pters.basicPointers();
    */

    public:
    void basicPointers(){
        int age = 21;
        int *pAge = &age;

        cout << "Age is " << age << " and it is stored at " << pAge;
    }

};
