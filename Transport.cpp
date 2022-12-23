#include "transport.h"
class transport
{
public:
	transport() {}
	int getSpeed() {
		return _speed;
	}
	void setSpeed(int speed) {
		_speed = speed;
	}
	std::string getColor() {
		return _color;
	}
	void setColor(std::string color) {
		_color = color;
	}
	int getWeigth() {
		return _weigth;
	}
	void setWeigth() {}
private:
	int _speed = 60;
	std::string _color = "white";
	int _weigth;
};
class comercial : public transport
{
public:
	comercial() {}
	int getSpeed() {
		return _speed;
	}
	std::string getColor() {}
	int getPrice() {}
	void setPrice() {}
	int getCapacity() {}
	void setCapacity() {}
private:
	int _speed = 80;
	int _price;
	int _capacity;
};
class bus : public comercial
{
public:
	bus() {}
	int getSpeed() {
		return _speed;
	}
	std::string getColor() {}
	int getNumber() {}
	void setNumber() {}
	std::string getWay;
	void setWay() {}
private:
	int _speed = 40;
	int _number;
	std::string way;
};