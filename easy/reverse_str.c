#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int get_line(char * s, int n)
{
	int i;
	char c;
	for (i = 0; i < n-1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

void reverse(char * s)
{
	int i, j;
	char t;
	for (i = 0, j = strlen(s)-1; i < j; i++, j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}

int main(void)
{
	char s[MAXLINE];
	get_line(s, MAXLINE);
	reverse(s);
	puts(s);
}

