#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates an array of chars
 *@size: size of an array to be created
 *@c: char to initilize an array with
 *
 *Return: pointer to the array or NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *b;

	if (size == 0)
		return (NULL);
	b = malloc(sizeof(char) * size);
	if (b == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		b[j] = c;
	}
	return (b);
}
