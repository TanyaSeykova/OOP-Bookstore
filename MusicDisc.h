#pragma once
#include "Product.h"
class MusicDisc : public Product
{
private:
	string performer;
	int year;
	int lenght; //in minutes

public:
	MusicDisc();
	MusicDisc(string _name, double _price, string _performer, int _year, int _lenght);

	void print() const override;
};

