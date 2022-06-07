#include "main.h"
/**
 * _islower - is a function that checks if the output is character s capibatl
 *
 * Return: gives 1 or zero
 */
int _islower(int c)
{
	char i;
	int lower = 1;
	
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			lower = 0;
	}
	return (lower);
}
