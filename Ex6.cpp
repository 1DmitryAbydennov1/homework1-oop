#include <iostream>
#include <cstring>

struct Book
{
	char title[100];
	int pages;
	float price;
};

bool isExpencive(const Book& book)
{
	if (book.price > 1000)
		return 1;
	else
		return 0;
}

int main()
{
	Book book;
	book.pages = 100;
	book.price = 200;
	strcpy(book.title,"Title");
	bool b;
	b = isExpencive(book);
	std::cout << b << std::endl;
}