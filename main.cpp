//Gwendylan Furiato
//CSS 342 
//Winter 2021
//Assignment 1




#include "library.h"
#include <cassert>
#include <iostream>

using namespace std;

void test1()
{
	Library library("The Books");
	library.addBook("The Hunger Games");
	library.addBook("Divergent");
	library.addBook("Twilight");
	library.addBook("The Faults In Our Stars");
	library.addBook("The Hate You Give");
	library.addBook("After");
	library.addBook("Lord of the Rings");
	library.addBook("Thirteen Reasons Why");
	library.addBook("Catching Fire");
	library.addBook("The Hobbit");
    library.addBook("Fifty Shades of Grey");
	library.listAllBooks();


	
	bool result = library.isInLibrary("Divergent");
	assert(result);


	//can not add it twice, so results will be false
	result = library.addBook("Divergent");

	assert(!result);

	//test remove, so it should be true
	result = library.removeBook("Divergent");
	assert(result);


	//not in the library so result is false
	result = library.isInLibrary("Divergent");
	assert(!result);

	//can not remove book twice, result is false
	result = library.removeBook("Divergent");
	assert(!result);

	cout << "\n";
	
}

void test2()
{
	Library other("Library");

	//Fill up the entire array
	for (int i = 0; i < 101; i++)
	{
		other.addBook(to_string(i));
	}
	
}

void test3()
{
	Library n("OtherLibrary");
	bool something = n.removeBook("a");

	//This should be false because you cannot remove an empty array
	assert(!something);

}


void testAll()
{
	cout << "Here are the books availble" << endl;
	test1();
	test2();
	test3();
	cout << "end of list" << endl;

}

int main()
{
	testAll();
	return 0;
}