#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		return (s + index);
	}
	return ('\0');
}
