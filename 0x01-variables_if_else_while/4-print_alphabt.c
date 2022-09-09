#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line except q and e
 * Return: 0
 */

int main(void)
{
	char cl = 'a';

	while (cl <= 'z')
	{
	if (cl != 'e' && cl != 'q')
	{
		putchar(cl);
	}
	cl++;
	}
	putchar('\n');
	return (0);
}
