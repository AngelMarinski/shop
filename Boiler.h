#pragma once
#include "Products.h"

class Boiler : public Product {
public:
	Boiler();
	Boiler(const string& Class, unsigned int _capacity, unsigned int _power, unsigned int _temp, double _price);
	Boiler(const Boiler& other) = default;
	Boiler& operator=(const Boiler& other) = default;
	~Boiler() = default;

	string getClass()const;
	unsigned int getCapacity()const;
	unsigned int getPower()const;
	unsigned int getTemperature()const;
	virtual void print() const override;
private:
	string boilerClass;
	unsigned int capacity;
	unsigned int power;
	unsigned int maxTemperature;
};