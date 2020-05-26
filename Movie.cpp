#include "Movie.h"

Movie::Movie():Product()
{
	this->setCategory(Movies);
	this->year = 0;
	this->lenght = 0;
	this->IMDBScore = 0;
}

Movie::Movie(string _name, double _price, int _year, int _lenght, double _IMDBScore)
	:Product(Movies,_name,_price)
{
	this->year = _year;
	this->lenght = _lenght;
	this->IMDBScore = _IMDBScore;
}

void Movie::print() const
{
	cout << "ID Number: " << this->getID() << endl;
	cout << "Category: " << "Movies" << endl;
	cout << "Name: " << this->getName() << endl;
	cout << "Price: " << this->getPrice() << "$" << endl;

	cout <<"Year: "<< this->year << endl;
	cout << "Lenght: "<<this->lenght <<" minutes"<< endl;
	cout <<"IMDB Score: " <<this->IMDBScore << endl;
}
