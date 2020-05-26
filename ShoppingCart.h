#pragma once
#include "Product.h"
#include <map>
#include <iostream>
using namespace std;
class ShoppingCart
{
private:
	map < Product*, int,less_product> products; //first is the product, second is the quantity

public:
	ShoppingCart();

	void addToShoppingCart(Product *_product, int quantity);
	void removeFromShoppingCart(int _IDNumber);

	double overallCheck() const;
	void print() const;
};

