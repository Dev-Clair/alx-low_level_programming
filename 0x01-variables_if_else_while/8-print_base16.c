#include <stdio.h>

/**
 * main - prints all the numbers of base 16 starting from lowercase
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int n;
	char el;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (el = 'a'; el < 'f'; el++)
	{
		putchar(el);
	}
	putchar('\n');
	return (0);
}
