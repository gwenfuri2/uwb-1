#include "library.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Library::Library(const string& name)
{
    Library::takeListName = name;
	numberOfBooks = 0;
}

Library::~Library() {

}


bool Library::isInLibrary(const string& book) const {

    for (int i = 0; i < numberOfBooks; i++) {
        if (bookList[i] == book) {
            return true;
        }
    }
    return false;

}

bool Library::addBook(const string& book) {

    if (isInLibrary(book) == false) {
        bookList[numberOfBooks] = book;
        numberOfBooks = numberOfBooks + 1;
        return true;
    }
    if (numberOfBooks == MAX)
    {
        cout << "The Library is at full capacity" << endl;
        return false;
    }
    else {
        return false;
    }
}

bool Library::removeBook(const string& book) {

    for (int i = 0; i < numberOfBooks; i++) {
        if (bookList[i] == book) {
            bookList[i] = bookList[numberOfBooks - 1];
            numberOfBooks = numberOfBooks - 1;
            return true;
        }

    }
    return false;
}

ostream& operator<<(ostream& Out, const Library& library) {
    library.listAllBooks();
    return Out;
}

void Library::listAllBooks() const {
    if (numberOfBooks == 0)
    {
        //...Print out there there is none.
        cout << "There are no books in the Library" << endl;
    }
    else
    {
        //List the books in the library by iterating through the array.
        cout << "Here are the books in the Library: " << endl;
        for (int i = 0; i < numberOfBooks; i++)
        {
            cout << bookList[i] << endl;
        }
    }
}





