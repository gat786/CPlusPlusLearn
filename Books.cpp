#include<iostream>

using namespace std;

class Books{
private:
    string Author;
    int Price;
public:
    string Bookname;

    Books(){
        cout << "Default const running" <<endl;
        Author = "Author has no Name";
        Price = 0;
        Bookname = "Book has no Name";
    };

    Books(string aAuthor,int aPrice,string aBookname){
        cout << "Parameterised const running" << endl;
        Author = aAuthor;
        Price = aPrice;
        Bookname  = aBookname;
    };
};
