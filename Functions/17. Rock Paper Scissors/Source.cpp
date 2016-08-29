//Zomawia Sailo
//<zomawia@gmail.com>
//
//17. Write a program that lets the user play the game of Rock, Paper, Scissors against the
//	computer.The program should work as follows :
//1. When the program begins, a random number in the range of 1 - 3 is generated.If
//the number is 1, then the computer has chosen rock.If the number is 2, then the
//computer has chosen paper.So if the number is 3 then the computer has chosen
//scissors.
//2. The user enters their choice of “rock”, “paper” or “scissors”
//3. The computer’s choice is displayed.
//4. A winner is selected according to the following rules :
//1. Rock beats scissors, scissors beats paper, paper beats rock
//2. If there is a tie then the game must be replayed
//5. Make sure to break the game up into functions to perform each task.Make sure to
//look for any code that is repeated, and break it out into a function.


#include <iostream>
#include <cstdlib>
#include <time.h>

int randomRange(int start, int end)
{
	srand(time(0)); // seeding
	return (rand() % (end - start + 1) + start);

}

int compHand()
{
	int choice = randomRange(1, 3);
	
	if (choice == 3)
	{
		printf("Computer chooses scissors.\n\n");
		return 3;
	}
	else if (choice == 2)
	{
		printf("Computer chooses paper.\n\n");
		return 2;
	}
	else if (choice == 1)
	{
		printf("Computer chooses rock.\n\n");
		return 1;
	}
}

int decideHand()
{
	int input = 0;
	printf("Enter 1 for rock, 2 for paper, 3 for scissors\n");
	scanf_s("%d", &input);
	return input;
}

bool decideWinner(int comp, int player)
{
		// rock beats scissors
		if ( (comp == 1 && player == 3) ||
			(comp == 3 && player == 1) )
		{
			if (comp == 1) printf("Rock beats your scissors. You lose.\n\n");
			else printf("Rock beats their scissors. You win.\n\n");			
		}

		// scissors beats paper
		if ((comp == 3 && player == 2) ||
			(comp == 2 && player == 3))
		{
			if (comp == 3) printf("Scissors beats your paper. You lose.\n\n");
			else printf("Scissors beats their paper. You win.\n\n");			
		}

		// paper beats rock
		if ((comp == 2 && player == 1) ||
			(comp == 1 && player == 2))
		{
			if (comp == 2) printf("Paper beats your rock. You lose.\n\n");
			else printf("Paper beats their rock. You win.\n\n"); 			
		}


		// tie
		if (comp == player)
		{
			if (comp == 1) printf("Both rock. TIE\n\n");
			else if (comp == 2) printf("Both paper. TIE\n\n");
			else printf("Both scissors. TIE\n\n");			
			return false;
		}

		return true;
}

int main()
{
	int playerHand = 0,
		compDecision = 0;

	bool IsGameTied = false;
	
	printf("ROCK PAPER SCISSORS!\n---------------\n");
	
	while (!IsGameTied)
	{
		playerHand = decideHand();
		compDecision = compHand();

		//debug
		//printf("***\nYour hand: %d, Computer: %d\n***\n\n", playerHand, compDecision);

		IsGameTied = decideWinner(compDecision, playerHand);
	}

	system("pause");

}