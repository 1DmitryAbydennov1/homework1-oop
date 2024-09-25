#include <iostream>
#include <cstring>

struct Book
{
	char title[100];
	int pages;
	float price;
};

void addPrice(Book& book, float x)
{
	book.price = book.price + x;
}
int main()
{
	Book book;
	book.pages = 5;
	strcpy(book.title,"Title");
	book.price = 7.5;
	int x = 3;
	addPrice(book,x);
	std::cout << book.price << std::endl;
}