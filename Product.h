#pragma once
#include <string>
#include "Utilities.h"
#include <iostream>

using namespace std;
class Product
{
private:
	int IDNumber;
	ProductCategories category;
	string name;
	double price;

protected:
	void setCategory(ProductCategories _category);
public:
	Product();
	Product(int _IDNumber, ProductCategories _category, string _name, double _price);
	Product(ProductCategories _category, string _name, double _price);

	int getID() const;
	ProductCategories getCategory()const;
	const string getName()const;
	double getPrice()const;

	bool operator==(const Product& other);
	friend bool operator<(const Product& first, const Product& second);
	virtual void print() const = 0;
};

//this is for the map in ShoppingCart
//I use it for comparison and put it in the definition of the map
struct less_product : binary_function<const Product*, const Product*, bool>
{
	bool  operator() (const Product* a, const Product* b) const 
	{ 
		if (a->getID() < b->getID()) return true;
		return false;
	}
};

