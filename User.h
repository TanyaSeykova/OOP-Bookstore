#pragma once
#include "Product.h"
#include "Utilities.h"
#include "ShoppingCart.h"
#include <vector>
using namespace std;
class User
{
private:
	string username;
	string password;
	string firstName;
	string surname;
	string email;
	UserType verification;
	ShoppingCart userShoppingCart;

public:
	User();
	User(string _username, string _password, string _firstName, string _surname, string _email, UserType _verification);

	void userAddToShoppingCart(Product* _product, int quantity);

	ShoppingCart &getShoppingCart();

	UserType getVerification() const;
	void setVerification(UserType _verification);
	string getUsername() const;
	string getEmail() const;

	void print() const;

};

