#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 * Return: returns success
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index=index+1])
		len=len+1;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
        return ("SUCCESS");
}

