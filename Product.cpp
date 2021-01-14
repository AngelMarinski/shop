#include "Products.h"

int nextId = 0;

Product::Product() {
	this->nameOfProduct = string();
	this->price = 0;
	this->idNum = ++nextId;
}
Product::Product(const string& _nameOfProduct, double _price, Category _category)
	:
	price(_price),
	category(_category)
{
	this->idNum = ++nextId; //doing this because i want every product to be with unique idnumber
	this->setName(_nameOfProduct);
}

//wanted to look cool typing cout<<product; gigi
ostream& operator<<(ostream& out, const Product& p) {
	out << endl << "Name: " << p.getNameofProd() << endl;
	out << "Price: " << p.getPrice() << endl;
	out << "ID number: " << p.getIDnumber() << endl;
	out << "Category: " << p.getCategory() << endl;
	return out;
}
void Product::setName(const string& name) {
	this->nameOfProduct = name;
}

string Product::getNameofProd() const {
	return this->nameOfProduct;
}

double Product::getPrice() const {
	return this->price;
}

Category Product::getCategory() const {
	return this->category;
}

unsigned int Product::getIDnumber() const {
	return this->idNum;
}

void Product::setPrice(double _price) {
	this->price = _price;
}