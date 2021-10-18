/*
 * calculate a mathematical expression, no precedence works though
 *
 * Enter an expresssion: 1+3+4
 * Value of expression: 7.00000
 */

#include <stdio.h>

int main(void)
{
	double total = 0.0, num = 0.0;
	char op;

	printf("Enter an expression: ");
	scanf("%lf", &total);		// getting the first number
	// getting the operator
	while((op = getchar()) != '\n')
	{
		// getting the next number
		scanf("%lf", &num);
		switch(op)
		{
			case '+':
				total += num; break;
			case '-':
				total -= num; break;
			case '*':
				total *= num; break;
			case '/':
				total /= num; break;
		}
	}

	printf("Value of expression: %f\n", total);

	return 0;
}
