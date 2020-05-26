#include "Puzzle.h"
Puzzle::Puzzle() : Product()
{
	this->setCategory(Puzzles);
	this->pieces = 0;
	this->size.width = 0;
	this->size.lenght = 0;
}

Puzzle::Puzzle(string _name, double _price, int _pieces, int _width, int _lenght)
	:Product(Puzzles,_name,_price)
{
	this->pieces = _pieces;
	this->size.width = _width;
	this->size.lenght = _lenght;
}

void Puzzle::print() const
{
	cout << "ID Number: " << this->getID() << endl;
	cout << "Category: " << "Puzzles" << endl;
	cout << "Name: " << this->getName() << endl;
	cout << "Price: " << this->getPrice() << "$" << endl;
	
	cout << this->pieces << " pieces" << endl;
	cout <<"Size in cm: " <<this->size.width << "/" << this->size.lenght << endl;
}
