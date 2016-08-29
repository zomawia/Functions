//	Zomawia Sailo <zomawia@gmail.com>
//
//	Write a function that takes as its parameter an array called input_array of integers, the
//	array size and a second array of the same size called output_array.Fill each element in the
//	second array to be the value in the same index of input_array multiplied by its index in the
//	array.
//	Use this code to test your function :
//


#include <iostream>

// function here
void MultiplyByIndex(int input[], int output[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		output[i] = input[i] * i;
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
	int integer_array[7] = { 10, 15, 7, 4, 13,19,8 };
	int output_array[7] = {};
	MultiplyByIndex(integer_array, output_array, 7);
	//output_array should be {0, 15, 14, 12, 52, 95, 48};
	PrintArray(output_array, 7);

	system("pause");

	return 0;
}