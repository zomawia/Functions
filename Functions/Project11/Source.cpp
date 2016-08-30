//	Zomawia Sailo <zomawia@gmail.com>
//
//	11. Write a function that takes as its parameters two input arrays of integers, an integer for
//		their size and an output array.Set the value at each index to the sum of the corresponding
//		two elements of the input arrays at the same index.Assume the three arrays are of equal
//		length. Write your own code for testing this function.

#include <iostream>

void ArrayCombiner(int inputA[], int inputB[], int output[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		output[i] = inputA[i] + inputB[i];
	}
}

void PrintArray(int input[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", input[i]);
	}
}

int main()
{
	int inputarrayOne[5] = { 1, 2, 3, 4, 5 };
	int inputarrayTwo[5] = { 5, 6, 7, 8, 9 };
	int outputarray[5] = {};

	ArrayCombiner(inputarrayOne, inputarrayTwo, outputarray, 5);

	PrintArray(outputarray, 5);

	system("pause");
}