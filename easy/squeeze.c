#include <stdio.h>
#include <stdbool.h>

void squeeze(char s[], char c)
{
	int i, j;
	for (i = j = 0; s[i] != '\0'; i++)
	{
		if (s[i] != c)
			s[j++] = s[i];
	}
	s[j] = '\0';
}
int main(void)
{
	char s[] = "life is like animal porn";
	squeeze(s, 'i');
	puts(s);
	return 0;
}
