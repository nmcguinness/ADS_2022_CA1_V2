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
