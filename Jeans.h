#pragma once
#include "Products.h"

enum Colour {
	Black,
	Silver,
	Blue
};

class Jeans :public Product {
public:
	Jeans();
	Jeans(const string& _brand, const string& _size, Colour _col, double price);
	Jeans(const Jeans& other) = default;
	Jeans& operator=(const Jeans& other) = default;
	~Jeans() = default;

	string getSize()const;
	string getBrand()const;
	Colour getCol()const;
	virtual void print()const override;
private:
	Colour col;
	string size;
	string brand;
};