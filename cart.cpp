#include "Cart.h"

using namespace std;

Cart::Cart() {
	this->cart = vector<Product*>();
}
void Cart::addProduct(Product* product) {
	this->cart.push_back(product);
}
void Cart::removeProduct(const Product* product) {
	int indexHolder = -1; //want to know the position which i dont need anymore and just write over it 
	for (size_t i = 0; i < this->cart.size(); i++) {
		if (this->cart[i]->getIDnumber() == product->getIDnumber()) {
			indexHolder = i;
		}
	}
	if (indexHolder != -1) {
		this->cart.erase(cart.begin()+indexHolder);
	}
	else { cout << endl << "There is no such a product" << endl; }
}
void Cart::printCart() const {
	cout << endl << "Cart: " << endl;
	for (size_t i = 0; i < this->cart.size(); i++) {
		cart[i]->print();
		cout << endl;
	}
}
vector<Product*> Cart::getCart()const {
	return this->cart;
}

double Cart::purchase() {
	double totalPrice = 0;
	cout <<endl<< "Total Price: ";
	while (this->cart.size() != 0) {
		for (size_t i = 0; i < this->cart.size(); i++) {
			totalPrice += this->cart[i]->getPrice();
		}
		return totalPrice;
	}
	return totalPrice;
}