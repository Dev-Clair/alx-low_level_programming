#include <stdio.h>

/**
 * main - prints the alphabet in lower and uppercase
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	char bl;

	for (bl = 'a'; bl <= 'z'; bl++)
	{
	putchar(bl);
	}
	for (bl = 'A'; bl <= 'Z'; bl++)
	{
	putchar(bl);
	}
	putchar('\n');
	return (0);
}
