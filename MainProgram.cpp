#include "MyFunctions.h"

int main()
{
	bookType myBook[5];

	//int choice;
	int numberOfBooks = 0;

	header();
	getBookData(myBook, numberOfBooks);
	printBookData(myBook, numberOfBooks);

	system("pause");

	return 0;
}
