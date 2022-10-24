#include "main.h"

/**
 * _puts - put string
 * @str: first parameter
 * Description: prints a string
 * Return: Alwalys (0)
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
