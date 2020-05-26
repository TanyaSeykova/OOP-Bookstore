#include "MusicDisc.h"

MusicDisc::MusicDisc() : Product()
{
	this->setCategory(MusicDiscs);

	this->lenght = 0;
	this->performer = "empty";
	this->lenght = 0;
}

MusicDisc::MusicDisc(string _name, double _price, string _performer, int _year, int _lenght)
	:Product(MusicDiscs,_name,_price)
{
	this->performer = _performer;
	this->year = _year;
	this->lenght = _lenght;
}

void MusicDisc::print() const
{
	cout << "ID Number: " << this->getID() << endl;
	cout << "Category: " << "MusicDiscs" << endl;
	cout << "Name: " << this->getName() << endl;
	cout << "Price: " << this->getPrice() << "$" << endl;

	cout <<"Performer: "<< this->performer << endl;
	cout << "Year: "<<this->year << endl;
	cout <<"Lenght: "<< this->lenght<<" minutes" << endl;
}
