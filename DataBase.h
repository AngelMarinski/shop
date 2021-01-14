#pragma once
#pragma once
#include "Cart.h"
#include "Products.h"
#include "Account.h"
#include "CustomerAccount.h"

class DataBase {
public:
	DataBase();
	DataBase(const DataBase&) = default;
	DataBase& operator=(const DataBase&) = default;
	~DataBase();
	void addAccount( Account* other);
	void removeAccount(const Account* other);
	void singUp(const string& username, const string& password);
	Account* logIn(const string& username, const string& password);
	void logOut();
	void addProduct(Product* other);
	void removeProduct(const Product* other);
	void printDataBase();
private:
	vector<Account*> account;
	vector<Product*> products;
};