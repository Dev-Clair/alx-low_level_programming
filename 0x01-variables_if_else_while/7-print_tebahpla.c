#include <stdio.h>

/**
 * main - prints the alphabet in lower case in reverse order
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	char dl;

	for (dl = 'z'; dl <= 'a'; dl--)
	{
	putchar(dl);
	}

	putchar('\n');
	return (0);
}
