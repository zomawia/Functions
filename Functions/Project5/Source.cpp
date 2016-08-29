//Zomawia Sailo
//zomawia@gmail.com
//
//Write a function named CoinToss that simulates the tossing of a coin.
//The function should use the standard library rand() function in order to generate a
//display of either “heads” or “tails”.The rand() can be added by adding
//to the top of your program.It returns a random number between 0 and 32767.
//Demonstrate the function in a program that asks the user how many times they want to
//toss the coin, and then simulates the tossing of the coin that number of times.
//

#include <iostream>
#include <cstdlib>

void CoinToss(int amount)
{
	while (amount > 0)
	{
		if (rand() % 2 == 0) printf("Coin landed as: Heads\n");
		else printf("Coin landed as: Tails\n");

		amount--;
	}
}

int main()

{
	int input = 0;

	printf("How many times do you want to toss the coin?\n>> ");
	scanf_s("%d", &input);

	CoinToss(input);
	system("pause");
}

// 6. Find the error in each of the following functions and explain how to fix them.
/*

int sum (int x, int y)
	{
		int result;
		result = x + y;
	}
	NEEDS A RETURN
	return result;


	int sum (int n)
	{
		if (0 == n)
			return 0;
		else
			n = n + n;
	}
	else statement needs a return
	return n;




	#include <iostream>
	int main()
	{
		double x = 13.6;
		std::cout << "square of 13.6 = " << square(x) << std::endl;
	}
	
	}
	int square (int x)
	{
		return x * x;
	}

	function square needs to return a double not an int
	function square should be about main()





*/
