#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int secretNo = 5;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	int outOfGuesses = 0;

	while(guess != secretNo && outOfGuesses == 0)
	{
		if(guessCount < guessLimit)
		{
		printf("Enter a number: \n");
		scanf("%d", &guess);
		guessCount++;
		}
		else
		{
			outOfGuesses = 1;
		}
	}
		if(outOfGuesses == 1)
		{
			printf("Out of guesses \n");
		}
		else
		{
			printf("You win!\n");
		}

	return (0);
}
