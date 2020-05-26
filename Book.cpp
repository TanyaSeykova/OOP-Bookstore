#include "Book.h"

Book::Book():Product()
{
	this->setCategory(Books);
	this->author = "empty";
	this->pages = 0;
	this->publisher = "empty";
	this->GoodreadsScore = 0;
}

Book::Book( string _name, double _price, string _author, int _pages, string _publisher, double _GoodreadsScore)
	:Product(Books,_name,_price)
{
	this->author = _author;
	this->pages = _pages;
	this->publisher = _publisher;
	this->GoodreadsScore = _GoodreadsScore;
}

void Book::print() const
{
	
	cout <<"ID Number: "<< this->getID() << endl;
	cout <<"Category: "<< "Books" << endl;
	cout <<"Name: "<< this->getName() << endl;
	cout <<"Price: "<< this->getPrice()<<"$" << endl;

	cout <<"Author: "<< this->author << endl;
	cout <<"Number of pages: "<< this->pages << endl;
	cout <<"Publisher: " <<this->publisher << endl;
	cout <<"Goodreads score: "<< this->GoodreadsScore << endl;
}
