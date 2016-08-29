//Zomawia Sailo <zomawia@gmail.com>
//
//Write a function that takes as its parameter an array of integers and the size of the array
//and returns the minimum of the values in the array.
//Use this code to test the function :



#include <iostream>


//Your function called MinInArray goes here

int MinInArray(int numbers[], int size)
{
	int MinNum = numbers[0];

	for (int i = 0; i < size; ++i)
	{
		if (MinNum > numbers[i]) MinNum = numbers[i];
		printf("%d ", numbers[i]);
	}

	return MinNum;
}

int main()
{
	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int result = MinInArray(integer_array, 7); //result = 4
	std::cout << std::endl << "***** Min Number in Array: " << result << std::endl;

	system("pause");
}