// ADS_2022_CA1_V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define SHOW_DEBUG_MSGS
#include <iostream>
#include "Functions.h"

int main()
{
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