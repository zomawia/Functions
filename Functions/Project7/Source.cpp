//Zomawia Sailo
//zomawia@gmail.com
//
//
//Write a function called SumTo that accepts an integer parameter N and returns the sum of
//all integers from 1 to N, including N.
//Use this code to test the function :////#include <iostream>
////Your function called SumTo goes here
//int main()
//{
//	int result = SumTo(3); //result = 1 + 2 + 3 = 6
//	std::cout << result << std::endl;
//	result = SumTo(15); //result should now be 120
//	std::cout << result << std::endl;
//}
//Your function called SumTo goes here

#include <iostream>

int SumTo(int num)
{
	int sum=0;
	
	for (int i = 0; i <= num; ++i)
	{
		sum += i;
	}

	return sum;
}

int main()
{
	int result = SumTo(3); //result = 1 + 2 + 3 = 6	
	printf("%d\n", result);

	result = SumTo(15); //result should now be 120
	printf("%d\n", result);

	system("pause");
}