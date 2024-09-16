#include <stdio.h>

int _strlen(char *s)
{
	int total = 0, i;

	for (i = 0; s[i] != '\0'; i++) {
		total += 1;
	}
	return total;
}
