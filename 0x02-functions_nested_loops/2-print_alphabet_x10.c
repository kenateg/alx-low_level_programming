#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets ten times
 * Return: returns null
 */
void print_alphabet_x10(void)
{
	int x;
	char v;

	for (x = 0; x < 10; x++)
	{
		for (v = 'a'; v <= 'z'; v++)
			_putchar(v);
		_putchar('\n');
	}
