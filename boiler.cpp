#include "Boiler.h"

Boiler::Boiler() {
	this->boilerClass = string();
	this->capacity = 0;
	this->maxTemperature = 0;
	this->power = 0;
	category = Technology;
}
Boiler::Boiler(const string& Class, unsigned int _capacity, unsigned int _power, unsigned int _temp,double _price)
	:capacity(_capacity),
	power(_power),
	maxTemperature(_temp)
{
	this->boilerClass = Class;
	setPrice(_price);
}

string Boiler::getClass() const{
	return this->boilerClass;
}
unsigned int Boiler::getCapacity() const{
	return this->capacity;
}
unsigned int Boiler::getPower() const{
	return this->power;
}
unsigned int Boiler::getTemperature() const{
	return this->maxTemperature;
}
void Boiler::print() const{
	cout << endl << "Category: " << Technology;
	cout << endl << "Boiler class: " << getClass();
	cout << endl << "Capacity: " << getCapacity()<<"L";
	cout << endl << "Power: " << getPower()<<"W";
	cout << endl << "Max Temperature: " << getTemperature()<<"°C";
	cout << endl << "Price tag: " << getPrice()<<"$";
	cout << endl << "ID number: " << getIDnumber();
}