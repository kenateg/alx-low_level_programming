#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char lw;

for (lw = 'a'; lw <= 'z'; lw++)
{ putchar(lw); }
putchar('\n');
return (0);
}
