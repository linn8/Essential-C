// prints a reverse of an int
// 123 => 321
#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter a fucking number: ");
	scanf("%d", &n);

	do
	{
		printf("%d", n%10);
		n /= 10;
	} while(n > 0);
	printf("\n");

	return 0;
}
