#include "main.h"
/**
 * print_alphabet_x10 - function to prints alphabet 10 times
 *
 *
 *
 */
void print_alphabet_x10(void)
{	
	char i;
	char h;

	for (h = 1; h <= 10; h++)
	{ 
		for (i = 'a'; i <= 'z'; i++)
		{ 
			_putchar(i);
		}
		_putchar('\n');
	}
}
