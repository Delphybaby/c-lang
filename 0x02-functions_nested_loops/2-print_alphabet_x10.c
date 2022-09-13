#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: always return to 0
 *
 */
void print_alphabet_x10(void)
{	
	char i;
	char j;

	for ( j = 1; j <= 10; j++)
	{ 
		for (i = 'a'; i <= 'z'; i++)
		{ 
			putchar(i);
		}
		putchar('\n');
	}
}
