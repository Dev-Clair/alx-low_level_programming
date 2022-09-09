#include <stdio.h>

/**
 * main - prints single digits of base 10 starting from 0
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int z;

	for (z = 0; z < 10; z++)
	{
		printf("%d", z);
	}
	printf('\n');
	return (0);
}
