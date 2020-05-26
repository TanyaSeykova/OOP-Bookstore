#pragma once
#include "Product.h"
#include "Utilities.h"

class Puzzle : public Product
{
private:
	int pieces;
	Size size;

public:
	Puzzle();
	Puzzle(string _name, double _price, int pieces, int width, int lenght);

	void print() const override;
};


