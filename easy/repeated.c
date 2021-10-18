/*
 * Find if a digit appears more than once, using bool array
 * input => 12343 (repeated)
 * input => 12345 (not repeated)
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool digit_seen[10] = {false};
	long n;
	int digit;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while(n > 0)
	{
		digit = n % 10; // get the last digit
		if (digit_seen[digit]) // if the digit has already appeared
			break;
		digit_seen[digit] = true; // set true as we have seen the digit
		n /= 10; // remove the last digit
	}

	if (n > 0)
		printf("Repeated.\n");
	else
		printf("No repeated.\n");

	return 0;
}
