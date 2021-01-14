#pragma once
#include "Account.h"

//created that class because i realised that there is two types of account admin and customer, but i havent figgured out how to create it 
class Customer : public Account {
public:
	Customer();
	Customer(const string& _username, const string& _password);
	Customer(const Customer& other) = default;
	Customer& operator=(const Customer & other) = default;
	~Customer() = default;
	virtual string getUsername() const override;
	virtual void print() const override;
	virtual Cart& getCart() override;
	friend class DataBase;
protected:
	virtual string getPassword() const override;
private:
	string username;
	string password;
	Cart cart;
};