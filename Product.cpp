#include "Product.h"

int pseudoIDNumber = 1;
#include <iomanip>
void Product::setCategory(ProductCategories _category)
{
	this->category = _category;
}

Product::Product()
{
	this->IDNumber = 0;
	this->category = Other;
	this->name = "empty";
	this->price = 0;
}

Product::Product(int _IDNumber, ProductCategories _category, string _name, double _price)
{
	this->IDNumber = _IDNumber;
	this->category = _category;
	this->name = _name;
	this->price = _price;
}

Product::Product(ProductCategories _category, string _name, double _price)
{
	this->IDNumber = pseudoIDNumber;
	pseudoIDNumber++;

	this->category = _category;
	this->name = _name;
	this->price = _price;
}

int Product::getID() const
{
	return this->IDNumber;
}

ProductCategories Product::getCategory() const
{
	return this->category;
}

const string Product::getName() const
{
	return this->name;
}

double Product::getPrice() const
{
	return this->price;
}

bool Product::operator==(const Product& other)
{
	if (this->IDNumber != other.IDNumber) return false;
	else if (this->category != other.category) return false;
	else if (this->name != other.name) return false;
	else if (this->price != other.price) return false;
	return true;
}



