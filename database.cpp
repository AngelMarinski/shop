#include"DataBase.h"

DataBase::DataBase() {
	this->account = vector<Account*>();
	this->products = vector<Product*>();
}

DataBase::~DataBase() {
	for (size_t i = 0; i < this->account.size(); i++) {
		delete this->account[i];
	}
}
//some words about this class: so i need a class which should stock all of my data, so i created database for all the items we offer and for all accounts, so that i can check if the username u would like is taken or not
void DataBase::addAccount(Account* other) {
	this->account.push_back(other);
}
void DataBase::removeAccount(const Account* other) {
	size_t indexHolder = -1;
	for (size_t i = 0; i < this->account.size(); i++) {
		if (this->account[i]->getUsername()==other->getUsername()) {
			indexHolder = i;
		}
	}
	if (indexHolder != -1) {
		account.erase(account.begin()+indexHolder);
	}
	else { cout << endl << "There is no such an account" << endl; }
}
void DataBase::singUp(const string& username, const string& password) {
	bool itExist = 1;
	for (size_t i = 0; i < this->account.size(); i++) {
		if (this->account[i]->getUsername() == username) {
			cout << endl << "This username is already taken!" << endl;
			itExist = 0;
			break;
		}
	}
	if (itExist == 1) {
		Account* acc = new Customer(username, password);
		addAccount(acc);
	}
}
Account* DataBase::logIn(const string& username, const string& password) {
	bool itExist = 1;
	bool passMatch = 1;
	for (size_t i = 0; i < account.size(); i++) {
		if(this->account[i]->getUsername()==username) {
			if (this->account[i]->getPassword()!=password) {
				cout << endl << "Wrong password!"<<endl;
				return 0;
			}
			else { return this->account[i]; }
		}
		else { 
			cout << endl << "Username does not match!"<<endl; 
			return 0;
		}
	}
}
void DataBase::logOut() {}
void DataBase::addProduct(Product* other) {
	this->products.push_back(other);
}
void DataBase::removeProduct(const Product* other) {
	int indexHolder = -1;
	for (size_t i = 0; i < this->products.size(); i++) {
		if (this->products[i]->getIDnumber() == other->getIDnumber()) {
			indexHolder = i;
		}
	}
	if (indexHolder != -1) {
		this->products.erase(products.begin()+indexHolder);
	}
	else { cout << endl << "There is no such a product" << endl; }
}
void DataBase::printDataBase() {
	for (size_t i = 0; i < products.size(); i++) {
		products[i]->print();
	}
	
	for (int i = 0; i < account.size(); i++) {
		cout << account[i]->getUsername() << " ";
	}
}