#pragma once
#include "Product.h"
class Book : public Product
{
private:
	string author;
	int pages;
	string publisher;
	double GoodreadsScore;
	
public:
	Book();
	Book(string _name, double _price, string _author, int _pages, string _publisher, double _GoodreadsScore);

	void print() const override;
};

