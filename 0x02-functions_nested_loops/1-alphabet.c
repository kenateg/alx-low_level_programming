#include <stdio.h>
#include "trial.h"
/**
 * print_alphabet - prints out the alphabet in the lower case
 *
 * Return: returns no value
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
