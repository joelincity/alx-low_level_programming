#include <stdio.h>
/**
 * main - Write a program that prints all single digit numbers
 *
 * * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
