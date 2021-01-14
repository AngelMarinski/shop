#include "Catalogue.h"
#include <iomanip>

Catalogue::Catalogue() {
	this->products = vector<Product*>();
}
void Catalogue::addProduct(Product* _product) {
	this->products.push_back(_product);
}
void Catalogue::removeProduct(const Product* _product) {
	int indexHolder = -1;
	for (int i = 0; i < this->products.size(); i++) {
		if (this->products[i]->getIDnumber() == _product->getIDnumber()) {
			indexHolder = i;
		}
	}
	if (indexHolder != -1) {
		this->products.erase(products.begin()+indexHolder, products.begin()+indexHolder+1);
	}
	else { cout << endl << "There is no such a product" << endl; }
}
void Catalogue::sortByCategory(Category category) {
	for (int i = 0; i < this->products.size(); i++) {
		if (this->products[i]->getCategory() == category) {
			this->products[i]->print();
		}
	}
}
void Catalogue::sortByPriceHighToLow() {
	for (int i = 0; i < this->products.size(); i++) {
		for (int j = 0; j < this->products.size(); j++) {
			if (this->products[i]->getPrice() > this->products[j]->getPrice()) {
				swap(this->products[i], this->products[j]);
			}
		}
	}
}//buble sort
void Catalogue::sortByPriceLowToHigh() {
	for (int i = 0; i < this->products.size(); i++) {
		for (int j = 0; j < this->products.size(); j++) {
			if (this->products[i]->getPrice() < this->products[j]->getPrice()) {
				swap(this->products[i], this->products[j]); 
			}
		}
	}
}
void Catalogue::printCatalogue() {
	for (size_t i = 0; i < products.size(); i++) {
		products[i]->print();
	}
}
