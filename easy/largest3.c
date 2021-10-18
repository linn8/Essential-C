#include <stdio.h>

int main(void)
{
	int a,b,c;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d", &a, &b, &c);

	int largest = a;
	if (b > largest)
		largest = b;
	if (c > largest)
		largest = c;
	printf("Largest is %d\n", largest);
	
	return 0;
}
