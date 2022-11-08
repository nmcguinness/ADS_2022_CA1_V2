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

	double getHDSize() const { return this->hdSize; };
	double getPrice() const { return this->price; };

	friend ostream& operator<<(ostream& out, const Laptop& laptop) {
		out << laptop.make << ", " << laptop.price;
		return out;
	}

	//bool operator<=(Laptop other)
	//{
	//	return this->hdSize <= other.getHDSize()
	//		&& this->price <= other.getPrice();
	//}

	bool operator<=(const Laptop& rhs)
	{
		/*	return (*this).price <= (*this).getHDSize()
				&& (*this).price <= (*this).getPrice(); */
		return this->hdSize <= rhs.getHDSize()
			&& this->price <= rhs.getPrice();
	}

#pragma region EXTRA STUFF BECAUSE IM A NERD
	bool operator==(const Laptop& rhs) {
		//rhs.price = -9999;
		return this->hdSize == rhs.getHDSize()
			&& this->price == rhs.getPrice();
	}

	//MORE elegant than in lines below
	//bool operator!=(const Laptop& rhs) {
	//	//de-reference (go to the laptop stored by this)
	//	//compare that laptop with rhs
	//	//invert/flip the result of that comparison
	//	return !(*this == rhs);
	//}

	bool operator!=(const Laptop& rhs) {
		return this->hdSize != rhs.getHDSize()
			|| this->price != rhs.getPrice();
	}
#pragma endregion
};
