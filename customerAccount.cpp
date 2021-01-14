#include "CustomerAccount.h"

Customer::Customer() {
	this->username = string();
	this->password = string();
}
Customer::Customer(const string& _username, const string& _password) {
	this->username = _username;
	this->password = _password;
}

string Customer::getUsername() const {
	return this->username;
}

void Customer::print() const {
	cout << getUsername()<<endl;
	for (int i = 0; i < this->password.size(); i++) {
		cout << "*";
	}
}

Cart& Customer::getCart(){
	return this->cart;
}

string Customer::getPassword() const {
	return this->password;
}