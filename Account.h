#pragma once
#pragma once
#include "Cart.h"

using namespace std;

class Account {
public:
	Account() = default;
	Account(const Account& other) = default;
	Account& operator=(const Account& other) = default;
	virtual ~Account() = default;
	virtual string getUsername() const = 0;
	virtual void print() const = 0;
	virtual Cart& getCart() = 0;
	friend class DataBase;
protected:
	virtual string getPassword() const = 0;
};