#pragma once
#include <string>
#include <iostream>
class transport
{
public:
	transport() {}
	int getSpeed() {}
	void setSpeed() {}
	std::string getColor() {}
	void setVolor() {}
	int getWeigth() {}
	void setWeigth() {}
private:
	int _speed;
	std::string _color;
	int _weigth;
};
class comercial : public transport
{
public:
	comercial() {}
	int setSpeed() {}
	std::string getColor() {}
	int getPrice() {}
	void setPrice() {}
	int getCapacity() {}
	void setCapacity() {}
private:
	int _price;
	int _capacity;
};
class bus : public comercial
{
public:
	bus() {}
	int setSpeed() {}
	std::string getColor() {}
	int getNumber() {}
	void setNumber() {}
	std::string getWay;
	void setWay() {}
private:
	int _number;
	std::string way;
};
