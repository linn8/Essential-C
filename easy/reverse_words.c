#include <stdio.h>
#include <string.h>
#define MAX 200

int main(void)
{
	char s[] = "I AM HUMAN AND I NEED TO BE LOVED";
	int i = strlen(s), j;
	

	printf("The reversal is: \n");
	while(i > 0)
	{
		while(s[--i] != ' ' && i != 0) 	// getting the index of space backwards
			;
		
		j = i == 0 ? 0 : i + 1;
		while (s[j] != ' ' && s[j] != '\0')	// printing word forwards
			putchar(s[j++]);
		putchar(' ');
	}
	printf("\b\n");

	return 0;
}
