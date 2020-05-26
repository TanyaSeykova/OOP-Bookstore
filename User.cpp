#include "User.h"

User::User()
{
	this->username = "empty";
	this->password = "empty";
	this->firstName = "empty";
	this->surname = "empty";
	this->email = "empty@empty";
	this->verification = customer;
}

User::User(string _username, string _password, string _firstName, string _surname, string _email, UserType _verification)
{
	this->username = _username;
	this->password = _password;
	this->firstName = _firstName;
	this->surname = _surname;
	this->email = _email;
	this->verification = _verification;
}

void User::userAddToShoppingCart(Product* _product, int quantity)
{
	if (this->verification != banned)
	{
		this->userShoppingCart.addToShoppingCart(_product, quantity);
	}
	else cout << "You are not allowed to do that." << endl;
}

ShoppingCart& User::getShoppingCart() 
{
	return this->userShoppingCart;
}


UserType User::getVerification() const
{
	return this->verification;
}

void User::setVerification(UserType _verification)
{
	this->verification = _verification;
}

string User::getUsername() const
{
	return this->username;
}

string User::getEmail() const
{
	return this->email;
}

void User::print() const
{
	cout<<"Username: "<<this->username<<endl;
	cout <<"First name: " <<this->firstName << endl;
	cout <<"Surname: "<< this->surname << endl;
	cout <<"E-mail: "<< this->email << endl;
	cout << "Verification: ";
	switch (this->verification)
	{
	case 0: cout << "Customer" << endl; break;
	case 1: cout << "Vendor" << endl; break;
	case 2: cout << "Administrator" << endl; break;
	case 3: cout << "Banned" << endl; break;
	default: cout << "Customer" << endl; break;
		break;
	}
}
