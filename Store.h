#pragma once
#include "Product.h"
#include "User.h"
#include <vector>
using namespace std;
class Store
{
private:
	vector<User> users;
	vector<Product*> storage;

public:
	Store();

	void addUserToStore(User _user);
	void addProductToStorage(Product* _product);

	vector<User>& getUsers();
	vector<Product*>& getStorage();
	void userRemoveProductFromStorage(const User _user, int _IDNumber);
	void userBanUserByUsername(const User _user, string username);
	void printStorageByCategory(ProductCategories _category);

	void printUsers() const;
	void printStorage() const;
};

