// CPlusPlusLearn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Books.cpp"

using namespace std;

int main()
{
    Books book1("Tolkien",100,"The Lord of the Rings: Return of the king");
    cout << book1.Bookname << endl;
    Books book2();

    Books book3("Norse Mythology", 110, "Neil Gailman");
    cout << book3.Bookname << endl;
}
