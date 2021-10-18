#include <stdio.h>
// just binary searching algorithm

int guess_number(int max, int secret)
{
	int tries = 0, left = 0, right = max, guess;
	for(;;)
	{
		guess = (left + right) / 2;
		tries++;
		printf("%d Attempt: %d\n", tries, guess);
		if (guess == secret)
			return tries;
		else if (secret > guess)
			left = guess+1;
		else
			right = guess-1;
	}
}

int main(void)
{
	int max_number, secret_number;

	printf("Enter the max number: ");
	scanf("%d", &max_number);
	printf("Enter the secret number: ");
	scanf("%d", &secret_number);

	printf("Computer guessed your number in %d attempts.\n", guess_number(max_number, secret_number));

	return 0;
}
