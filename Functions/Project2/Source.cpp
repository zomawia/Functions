//Zomawia Sailo
//<zomawia@gmail.com>
//
//Write a function that returns the smaller of two floats that are passed to it :
//You should make a program that asks the user for two different numbers such that it
//outputs :
//Pass the two numbers into a function and output what the function returns :

#include <iostream>

float returnSmaller(float num1, float num2)
{
	if (num1 > num2)
		return num2;
	else
		return num1;

}

float returnSmaller(float num1, float num2, float num3)
{
	if (num1 > num2)
		return num2;
	else
		return num1;

}

int main()
{
	float value1 = 0.0, value2 = 0.0;

	printf("Enter value 1: ");
	scanf_s("%f", &value1);

	printf("Enter value 2: ");
	scanf_s("%f", &value2);

	printf("The smaller number is: %f\n", returnSmaller(value1, value2) );

	system("pause");
}

// 3. Add another function with the same name as the one you wrote in question 2, but with
// three floats instead of two.What is this language feature called ?
// OVERLOADING