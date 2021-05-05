
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<math.h>


int main()
{

	int num, guess, tries = 0;
	char play;
	srand(time(0)); //Random generator
	

	printf("You will guess my favorite number\n");
	
	do
	{
		num = rand() % 100 + 1; //Random number between 1 and 100
		do
		{

			tries++;

			printf("Enter a number between 1 and 100\n");
			scanf("%d", &guess);

			if (guess > num)
			{
				printf("Too high!, try again\n");
			}
			else if (guess < num)
			{
				printf("Too low!, try again\n");
			}
			else
			{
				printf("You did it! Congrats. It just took you %d tries haha! \n\n\n", tries);
			}
		} while (guess != num);

		while (getchar() != '\n'); //Clean input buffer

		printf("Do you want to play again? (Y/N)\n\n");
		scanf("%c", & play);

	} while (play == 'y' || play == 'Y');


	
	printf("Game is over\n");

	return 0;
}