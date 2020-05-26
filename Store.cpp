#include "Store.h"

Store::Store()
{
}

void Store::addUserToStore(User _user)
{
	for (int i = 0; i < this->users.size(); i++)
	{
		if (this->users[i].getUsername() == _user.getUsername())
		{
			cout << "There is already a user with that username. " << endl;
			return;
		}

		if (this->users[i].getEmail() == _user.getEmail())
		{
			cout << "There is already a user with that e-mail. " << endl;
			return;
		}
	}
	this->users.push_back(_user);
}

void Store::addProductToStorage(Product* _product)
{
	this->storage.push_back(_product);
}

vector<User>& Store::getUsers()
{
	return this->users;
}

vector<Product*>& Store::getStorage()
{
	return this->storage;
}

void Store::userRemoveProductFromStorage(const User _user, int _IDNumber)
{
	if (_user.getVerification() == administrator || _user.getVerification() == vendor)
	{
		for (int i = 0; i < this->storage.size(); i++)
		{
			if (this->storage[i]->getID() == _IDNumber)
			{
				this->storage.erase(this->storage.begin() + i);
				return;
			}
		}
		cout << "There is no product with this ID." << endl;
	}
	cout << "You are not allowed to do this" << endl;
}

void Store::userBanUserByUsername(const User _user, string _username)
{
	if (_user.getVerification() == administrator)
	{
		for (int i = 0; i < this->users.size(); i++)
		{
			if (this->users[i].getUsername() == _username)
			{
				this->users[i].setVerification(banned);
				return;
			}
		}
		cout << "There is no user with this username. " << endl;
	}
}

void Store::printStorageByCategory(ProductCategories _category)
{
	bool found = false;
	for (int i = 0; i < this->storage.size(); i++)
	{
		if (this->storage[i]->getCategory() == _category)
		{
			found = true;
			this->storage[i]->print();
			cout << endl;
		}
	}
	if (found == false) cout << "There aren't products in this categoty. " << endl;
}



void Store::printUsers() const
{
	for (int i = 0; i < this->users.size(); i++)
	{
		this->users[i].print();
		cout << endl;
	}
}

void Store::printStorage() const
{
	for (int i = 0; i < this->storage.size(); i++)
	{
		this->storage[i]->print();
		cout << endl;
	}
}
