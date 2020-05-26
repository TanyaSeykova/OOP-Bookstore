#include "ShoppingCart.h"

ShoppingCart::ShoppingCart()
{
}

void ShoppingCart::addToShoppingCart(Product* _product, int _quantity)
{
	auto iter = this->products.find(_product);
	if (iter != this->products.end())
	{
		this->products[_product] +=  _quantity;
	}
	else this->products[_product] = _quantity;
}

void ShoppingCart::removeFromShoppingCart(int _IDNumber)
{
	for (auto mapIter = this->products.begin(); mapIter != this->products.end(); mapIter++)
	{
		if (mapIter->first->getID() == _IDNumber)
		{
			this->products.erase(mapIter);
			return;
		}
	}
	cout << "There is no item with this ID in your ShoppingCart" << endl;
}


double ShoppingCart::overallCheck() const
{
	double sum = 0;
	for (auto mapIter = this->products.begin(); mapIter != this->products.end(); mapIter++)
	{
		sum += mapIter->first->getPrice() * mapIter->second;
	}
	return sum;
}

void ShoppingCart::print() const
{

	for (auto mapIter = this->products.begin(); mapIter != this->products.end(); mapIter++)
	{
		mapIter->first->print();
		cout << "Quantity: " << mapIter->second << endl;
		cout << endl;
	}
}
