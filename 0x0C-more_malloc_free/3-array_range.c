#include <stdio.h>
#include<limits.h>
#include <stdlib.h>
#include "main.h"
/**
 *array_range - creates a range in array
 *@min: the minimum range 
 *@max: the maximum range
 *Return: return NULL, but if successful return a pointer
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
