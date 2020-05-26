#pragma once
#include <string>
class Product;
enum ProductCategories
{
	Books,
	Puzzles,
	MusicDiscs,
	Movies,
	Other
};

enum UserType
{
	customer,
	vendor,
	administrator,
	banned
};

struct Size
{
	int width;
	int lenght;
};

