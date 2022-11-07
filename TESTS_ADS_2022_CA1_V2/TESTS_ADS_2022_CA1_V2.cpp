#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_2022_CA1_V2/Functions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TESTSADS2022CA1V2
{
	TEST_CLASS(TESTSADS2022CA1V2)
	{
	public:

		TEST_METHOD(testInterleaveArraysEqualLength)
		{
			//input
			int dataArrA[3] = { 1, 3, 5 };
			int lengthA = 3;

			int dataArrB[3] = { 2, 4, 6 };
			int lengthB = 3;

			//output
			int dataArrC[6] = { 0, 0, 0, 0, 0, 0 };  //should end as {1, 2, 3, 4, 5, 6}
			int lengthC = 6;

			int target[6] = { 1, 2, 3, 4, 5, 6 };

			// your code goes here.
			interleaveArrays(dataArrA, lengthA, dataArrB, lengthB, dataArrC);

			for (int i = 0; i < lengthC; i++)
			{
				Assert::AreEqual(target[i], dataArrC[i]);
			}
		}

		TEST_METHOD(testInterleaveArraysDifferentLength)
		{
			//input
			int dataArrA[3] = { 1, 2, 5 };
			int lengthA = 3;

			int dataArrB[4] = { 7, 6, 4, 3 };
			int lengthB = 4;

			//output
			int dataArrC[7] = { 0, 0, 0, 0, 0, 0, 0 };  //should end as {1, 7, 2, 6, 5, 4, 3}
			int lengthC = 7;

			// your code goes here.
		}

		/************************************** Question 4 **************************************/

		TEST_METHOD(testLaptopInitalized)
		{
			//instanciate a new laptop object and test that the object is set correctly

			// your code goes here
		}

		TEST_METHOD(testLaptopLessThan)
		{
			//instanciate two different and distinct Television objects and <= operator to test that one object is less than the other

			//your code goes here...
		}
	};
}