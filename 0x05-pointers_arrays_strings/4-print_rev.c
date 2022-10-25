#include "main.h"

/**
 * print_rev - print reverse
 * @s: input string
 * Description:  prints a string, in reverse
 * Return: Always (0)
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
