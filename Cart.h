#pragma once
#pragma once
#include "Products.h"
#include <vector>

class Cart {
public:
	Cart();
	Cart(const Cart& other)=default;
	Cart& operator=(const Cart& other)=default;
	~Cart()=default;
	void addProduct(Product* product);
	void removeProduct(const Product* product);
	double purchase();
	void printCart() const;
	vector<Product*> getCart() const;
	friend class DataBase;
private:
	vector<Product*> cart;
};