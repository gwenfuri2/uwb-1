#pragma once
#include <string>
using namespace std;
using namespace std;



//Library can store books as well as add, remove, and list availible books

class Library
{
	//list all books in file
	friend ostream& operator<<(ostream& Out, const Library& library);

public:
	//construct with given name
	explicit Library(const string& name);

	virtual ~Library();

	//add book
	bool addBook(const string& book);

	//remove a book
	bool removeBook(const string& book);

	//list availible books
	void listAllBooks() const;

	//It is True if book is found in the Library
	bool isInLibrary(const string& book)const;

private:
	int randNumList = 0;
	int numberOfBooks = 0;
	static const int MAX = 100;
	int bookRandom[MAX];
	string bookList[MAX];
	string takeListName;

};