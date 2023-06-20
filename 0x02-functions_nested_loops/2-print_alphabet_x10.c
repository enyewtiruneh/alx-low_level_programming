#include "main.h"

/**
 * print_alphabet_x10 - list alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int x = 0;

	while (x <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	x++;
	}
}

