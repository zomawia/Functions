// Zomawia Sailo <zomawia@gmail.com>

//Write a function that takes as its parameters an array of integers and the size of the array
//and returns the sum of the values in the array.
//Use this code to test the function :



#include <iostream>
//Your function called SumArray goes here

int SumArray(int numbers[], int size)
{
	int SUM = 0;

	for (int i = 0; i < size; ++i)
	{
		SUM += numbers[i];
	}

	return SUM;
}

int main()
{
	int integer_array[5] = { 7, 3, 2, 4, 9 };
	int result = SumArray(integer_array, 5); //result = 25
	std::cout << result << std::endl;

	system("pause");
}