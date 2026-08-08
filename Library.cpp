#include <iostream>
#include <string>
#include <map>

using namespace std;

class Book
{
public:
    int id;
    string title;
    string author;
    bool issued;
};

class Library
{
private:
    map<int, Book> books;

public:
    
    Library()
    {
        books[1] = {1, "The Great Gatsby", "F. Scott Fitzgerald", false};
        books[2] = {2, "1984", "George Orwell", false};
        books[3] = {3, "To Kill a Mockingbird", "Harper Lee", true};
        books[4] = {4, "Pride and Prejudice", "Jane Austen", false};
    }

    void searchBook(int bookId)
    {
        auto it = books.find(bookId);

        if (it != books.end())
        {
            cout << "ID: " << it->second.id << endl;
            cout << "Title: " << it->second.title << endl;
            cout << "Author: " << it->second.author << endl;
            cout << "Available: "
                 << (it->second.issued ? "No" : "Yes") << endl;
        }
        else
        {
            cout << "\nBook not found!" << endl;
        }
    }
};

int main()
{
    Library lib;

    int bookId;
    cout << "Enter book ID: ";
    cin >> bookId;

    lib.searchBook(bookId);

    return 0;
}