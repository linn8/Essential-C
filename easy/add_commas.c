/*
 * c program to add commas to integers
 * n = 1200 => "1,200"
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * delim(int n)
{
	char temp[20];
	sprintf(temp, "%d", n);
	int len = strlen(temp) + 1 + (strlen(temp) / 3);
	char * ret = malloc(strlen(temp) + 1 + (strlen(temp) / 3)); // strlen(temp) / 3 is space for added commas
	int i = strlen(temp) % 3;
	if (i == 0) 
		i = 3;
	char * t = temp;
	char * p = ret; 
	while (*t)
	{
		if (i == 0)
		{
			*p++ = ',';
			i = 3;
		}
		*p++ = *t++;
		i--;
	}
	return ret;
}

int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	char * s = delim(n);
	printf("You entered %s\n", s);
	free(s);
}
