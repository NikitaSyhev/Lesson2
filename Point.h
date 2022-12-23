#pragma once
#include <string>
class Point
{
public:
	explicit Point(int x, int y, std::string str) :_x(x), _y(y), _str(str) {	}

	int getX() {
		return this->_x;
	}//return (*this)._x;
	void setX(int x) {
		this->_x = x;
	}
	Point& move(int x, int y) {
		_x += x;
		_y += y;
		return *this;
	}
private:
	int _x;
	int _y;
	std::string _str;
};
