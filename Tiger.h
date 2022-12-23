#pragma once
#include <string>
#include <iostream>
class Animal {
public:

	Animal() {
		std::cout << "animal constract\n";
	}
	~Animal() {
		std::cout << "Animal destraction\n";
	}
	int figth() {
		return _strength;
	}
	int Speed() {
		return _speed;
	}
	void eat() {
		std::cout << "Animal have eaten" << std::endl;;
	}

private:
	int _strength = 10;
	int _speed = 5;
};
class Tyger : public Animal //êëàññ tyger íàñëåäóåòñÿ îò êëàññà animal
{
public:
	Tyger(int heigth, const std::string& color) :_heigth(heigth), _color(color) {
		std::cout << "tyger constraction\n";
	}
	~Tyger() {
		std::cout << "tyyger destraction\n";
	}
	int figth() {
		return _strength;
	}
	int getHeigth() const {
		//_heigth = 6; -îøèáêà êîìïèëÿöèè
		//setHeigth(6); - íå êîíñòàíòíàÿ ôóíêöèèÿ (îøèáêà êîìïèëÿöèè compile error)
		return _heigth;
	}
	void setHeigth(int heigth) {
		_heigth = heigth;
	}
	std::string getColor() {
		return _color;
	}
	friend std::ostream& operator<<(std::ostream& os, Tyger& t) {
		os << t.getHeigth() << " " << t.getColor();
		return os;
	}

private:
	//Tyger *this
	int _heigth;
	int _strength = 50;
	std::string _color;
};

