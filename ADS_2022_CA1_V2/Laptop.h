#pragma once
#include <string>
#include <ostream>
using namespace std;

class Laptop {
private:
	string make;
	double price;
	int hdSize;
	double processorSpeed;

public:
	Laptop(string make, double price, int hdSize, double processorSpeed)
		: make(make), price(price), hdSize(hdSize), processorSpeed(processorSpeed)
	{
	}

	bool operator<=(Laptop other)
	{
		return this->hdSize <= other.getHDSize()
			&& this->price <= other.getPrice();
	}

	double getHDSize() const { return this->hdSize; };
	double getPrice() const { return this->price; };

	friend ostream& operator<<(ostream& out, const Laptop& laptop) {
		out << laptop.make << ", " << laptop.price;
		return out;
	}
};
