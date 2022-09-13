#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: always 0;
 *
 */
void print_alphabet_x10(void)
{	
	char i;
	char h;

	for ( h = 1; h <= 10; h++)
	{ 
		for (i = 'a'; i <= 'z'; i++)
		{ 
			putchar(i);
		}
		putchar('\n');
	}
}
