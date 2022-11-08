#pragma once
//pre-compiler directives

//1,2,3,4
//5,6,7,8
void interleaveArrays(int* pA1, int
	lengthA1, int* pA2, int
	lengthA2, int* pArrOut) {
	int j = 0;
	for (int i = 0; i < lengthA1 + lengthA2; i++)
	{
		if (i % 2 == 0) //even
		{
			pArrOut[i] = pA1[j];
			j++;
		}
		else  //odd
		{
			pArrOut[i] = pA2[j];
			j++;
		}
	}
}

//given the array [1.2, 5.6, 8.5, 9.8] and the value ‘5.0’ the function should return 3.
void countGreaterThan(double* pArr,
	int length, double target, int currentIndex, int& countGreaterThanTarget)
{
	if (currentIndex == length)		//step 1 - when do I finish?
		return;
	else							//step 2 - when do I keep going/call myself?
	{
		if (pArr[currentIndex] > target)
			countGreaterThanTarget++;

		currentIndex++;
		countGreaterThan(pArr, length, target,
			currentIndex, countGreaterThanTarget);
	}
}
