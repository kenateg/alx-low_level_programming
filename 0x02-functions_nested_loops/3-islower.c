#include "main.h"
/**
 * _islower - is a function that checks if the output is character s capibatl
 *
 * c: value entered 
 * Return: gives 1 or zero
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
