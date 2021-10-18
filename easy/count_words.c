#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(int argc, char * argv[])
{
	if (argc < 2)
	{
		fprintf(stderr, "usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	FILE *fp;
	int count = 0, ch;
	bool in_word = false;

	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while((ch = getc(fp)) != EOF)
	{
		if (!isspace(ch))
		{
			if (!in_word)
			{
				in_word = true;
				count++;
			}
		}
		else
			in_word = false;
	}

	printf("Words in %s: %d\n", argv[1], count);
	return 0;
}
