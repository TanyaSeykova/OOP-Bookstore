#pragma once
#include "Product.h"
class Movie : public Product
{
private:
	int year;
	int lenght; //in minutes
	double IMDBScore;

public:
	Movie();
	Movie(string _name, double _price, int _year, int _lenght, double _IMDBScore);

	void print() const override;
};

