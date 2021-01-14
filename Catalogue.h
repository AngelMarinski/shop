#pragma once
#include "Products.h"
#include <vector>

class Catalogue {
public:
	Catalogue();
	Catalogue(const Catalogue&) = default;
	Catalogue& operator=(const Catalogue&) = default;
	~Catalogue() = default;
	void addProduct(Product* _product);
	void removeProduct(const Product* _product);
	void sortByCategory(Category category);
	void sortByPriceHighToLow();
	void sortByPriceLowToHigh();
	void printCatalogue();
private:
	vector<Product*> products;
};