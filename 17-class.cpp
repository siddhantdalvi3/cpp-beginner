#include <iostream>

using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages;

    Book()
    {
        cout << "Creating new Book" << endl;
    }
};

class Magazine
{
public:
    string title;
    int pages;

    Magazine(string title, int pages)
    {
        this->title = title;
        this->pages = pages;
    }
};

int main()
{
    Book book;
    book.title = "The mystery";
    book.author = "Anonymous";
    book.pages = 500;

    cout << "Book title is : " << book.title << endl;
    cout << "Book author is : " << book.author << endl;
    cout << "total num of pages  : " << book.pages << endl;

    cout << "New book variable is stored at " << &book << endl;

    Magazine m("Fortune 500", 30);

    cout << "Magazine title is : " << m.title << endl;
    cout << "Magazine num of pages  : " << m.pages << endl;

    cout << "New magazine variable is stored at " << &m << endl;

    return 0;
}