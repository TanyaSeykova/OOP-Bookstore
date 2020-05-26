#include <iostream>
#include "Utilities.h"
#include "Product.h"
#include "ShoppingCart.h"
#include "Book.h"
#include "Puzzle.h"
#include "Movie.h"
#include "MusicDisc.h"
#include "User.h"
#include "Store.h"
using namespace std;


int main()
{
	Store bookstore;
	
	User user1("username1", "password1", "Ana", "Marinova", "anaMarinova@gmail.com", customer),
		user2("username2", "password2", "Iva", "Petrova", "ivaPetrova@gmail.com", customer),
		user3("username3", "password3", "Kaloyan", "Ivanov", "kaloyanIvanov@gmail.com", vendor),
		user4("username4", "password4", "Krasen", "Grigorov", "kraseGrigorov@gmail.com", administrator),
		user5("username5", "password5", "Mariana", "Dimitrova", "marianaDimitrova@gmail.com", administrator);

	Book book1("Pride and Prejudice", 19.95, "Jane Austin", 416, "Hermes", 4.26),
		book2("Red Rising",14.90,"Pierce Brown",472,"Ciela",4.27);

	Movie movie1("Catch me if you can", 13.90, 2002, 141, 8.1),
		movie2("The Greatest Showman", 18.90, 2017, 105, 7.6);

	MusicDisc musicDisc1("Lover", 11.73, "Taylor Swift", 2019, 61),
		musicDisc2("Divide (Deluxe)",16.99,"Ed Sheeran",2017,59);

	Puzzle puzzle1("Van Gogh - Starry-Night", 27.99, 1500, 100, 120),
		puzzle2("Night in New York", 17.99, 600, 60, 100);

	Product* product1 = &book1, * product2 = &book2, * product3 = &movie1, * product4 = &movie2,
		* product5 = &musicDisc1, * product6 = &musicDisc2, * product7 = &puzzle1, * product8 = &puzzle2;

	bookstore.addUserToStore(user1); bookstore.addUserToStore(user2); bookstore.addUserToStore(user3);
	bookstore.addUserToStore(user4); bookstore.addUserToStore(user5);

	bookstore.addProductToStorage(product1);	bookstore.addProductToStorage(product2);
	bookstore.addProductToStorage(product3);	bookstore.addProductToStorage(product4);
	bookstore.addProductToStorage(product5);	bookstore.addProductToStorage(product6);
	bookstore.addProductToStorage(product7);	bookstore.addProductToStorage(product8);

	cout << "PRINT STORAGE" << endl;
	cout << "----------------------------------------------" << endl;
	bookstore.printStorage();

	cout << endl;
	cout << "PRINT BY CATEGORY" << endl;
	cout << "----------------------------------------------" << endl;

	bookstore.printStorageByCategory(Movies);

	cout << endl;
	cout << "PRINT USERS" << endl;
	cout << "----------------------------------------------" << endl;
	bookstore.printUsers();


	cout << endl;
	cout << "ADMINISTRATOR BANNING USER" << endl;
	cout << "----------------------------------------------" << endl;
	bookstore.userBanUserByUsername(bookstore.getUsers()[3], "username2");
	bookstore.getUsers()[1].print();

	cout << endl;
	cout << "VENDOR REMOVING AN ITEM FROM STORAGE" << endl;
	cout << "----------------------------------------------" << endl;
	bookstore.userRemoveProductFromStorage(bookstore.getUsers()[2], 7);
	bookstore.printStorage();


	cout << endl;
	cout << "USER ADD TO SHOPPING CART" << endl;
	cout << "----------------------------------------------" << endl;

	bookstore.getUsers()[0].userAddToShoppingCart(product1, 2);
	bookstore.getUsers()[0].userAddToShoppingCart(product4, 3);
	bookstore.getUsers()[0].userAddToShoppingCart(product6, 1);
	bookstore.getUsers()[0].userAddToShoppingCart(product6, 7);

	bookstore.getUsers()[0].getShoppingCart().print();

	cout << endl;
	cout << "USER REMOVE ITEM FROM SHOPPING CART" << endl;
	cout << "----------------------------------------------" << endl;
	bookstore.getUsers()[0].getShoppingCart().removeFromShoppingCart(4);
	bookstore.getUsers()[0].getShoppingCart().print();

	cout << "OVERALL CHECK: " << bookstore.getUsers()[0].getShoppingCart().overallCheck()<<"$" << endl;

	
	return 0;
}