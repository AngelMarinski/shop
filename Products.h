#pragma once
#pragma once
#include <iostream>
#include <string>

using namespace std;

enum Category {
	Technology,
	Clothes,
	Books
};

class Product {
public:
	Product();

	Product(const string& _nameOfProduct, double _price, Category _category);

	Product(const Product& other) = default;

	Product& operator=(const Product& other) = default;

	virtual ~Product() = default;

	friend ostream& operator<<(ostream& out, const Product& p);

	void setName(const string& name);

	string getNameofProd() const;

	double getPrice() const;

	Category getCategory() const;

	unsigned int getIDnumber() const;

	virtual void print() const = 0;
	friend class Catalogue;
protected:
	void setPrice(double _price);
	string nameOfProduct;
	unsigned int idNum;
	double price;
	Category category;
};