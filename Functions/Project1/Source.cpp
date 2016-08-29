// Zomawia Sailo <zomawia@gmail.com>

//1. What is the output of this program ?
#include <iostream>
void printinteger(int variable)
{
	std::cout << variable << std::endl;
}
int main()
{
	int the_variable = 1;
	printinteger(the_variable);
	{
		printinteger(the_variable);
		int the_variable = 2;
		printinteger(the_variable);
		{
			printinteger(the_variable);
			int the_variable = 3;
			printinteger(the_variable);
		}
		printinteger(the_variable);
	}
	printinteger(the_variable);

	system("pause");
}

//1
//1
//2
//2
//3
//2
//1
