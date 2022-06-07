#include <stdio.h>
#include "main.h"
/**
 * main - function prints out the value _putchar
 * Return: will return the value zero
 */
int main(void)
{
	char character[8]  = "_putchar";
	int x;

	for (x = 0; x <= 7; x++)
	       _putchar(character[x]);
	_putchar('\n');
	
	return (0);
}
