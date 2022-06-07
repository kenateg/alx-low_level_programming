#include <unistd.h>
/**
 * _putchar - writes the character to stdout
 *
 * Return: returns 1 on success
 */
int _putchar(char x)
{
	return (write(1,&x,1));
}
