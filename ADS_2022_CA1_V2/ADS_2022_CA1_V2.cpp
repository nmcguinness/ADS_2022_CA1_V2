// ADS_2022_CA1_V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define SHOW_DEBUG_MSGS
#include <iostream>
#include "Functions.h"
using namespace std;

int main()
{
	double* pArr = new double[4];
	pArr[0] = 1.2; pArr[1] = 5.6;
	pArr[2] = 8.5; pArr[3] = 9.8;

	int length = 4;
	double target = 5;
	int countGreaterThanTarget = 0;
	int currentIndex = 0;

	countGreaterThan(pArr, length, target,
		currentIndex, countGreaterThanTarget);

	cout << "There are " << countGreaterThanTarget << " values!" << endl;

	delete[] pArr;

	bool fakeBug = true;

	int z = 100;

#ifdef SHOW_DEBUG_MSGS
	std::cout << z << std::endl;
#endif

#ifdef SHOW_DEBUG_MSGS
	std::cout << z << std::endl;
#endif

#ifdef SHOW_DEBUG_MSGS
	std::cout << z << std::endl;
#endif

#ifdef SHOW_DEBUG_MSGS
	std::cout << z << std::endl;
#endif

#pragma region Constructors
	std::cout << "Hello World!\n";
	//...
	//...
#pragma endregion

#pragma region Getters/Setters
	int x = 10;
#pragma endregion
}