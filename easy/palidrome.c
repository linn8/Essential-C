/*
 * noon -> palidrome
 * shit -> not palidrome
 * he lived as a devil eh -> palidrome
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "helivedasadevileh";
	int left, right;
	left = 0, right = strlen(s)-1;
	while(s[left++] == s[right--])
		;
	if (left >= right)
		printf("Plaidrome.\n");
	else
		printf("Not palidrome.\n");
	return 0;
}

