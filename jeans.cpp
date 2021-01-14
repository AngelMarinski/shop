#include "Jeans.h"

Jeans::Jeans() {
	this->size = string();
	this->brand = string();
	category = Clothes;
}
Jeans::Jeans(const string& _brand , const string& _size, Colour _col, double price) {
	this->brand = _brand;
	this->size = _size;
	this->col = _col;
	setPrice(price);
}

string Jeans::getSize() const{
	return this->size;
}
string Jeans::getBrand() const{
	return this->brand;
}
Colour Jeans::getCol()const {
	return this->col;
}

void Jeans::print()const {
	cout << endl << "Category: " << Clothes;
	cout << endl << "Brand: " << getBrand();
	cout << endl << "Size: " << getSize();
	cout << endl << "Colour: " << getCol();
	cout << endl << "Price: " << getPrice();
	cout << endl << "ID number: " << getIDnumber();
}