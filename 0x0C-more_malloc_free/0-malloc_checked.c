#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>
/**
 *malloc_checked - resposible for memeory allocation
 *@b: Memory to be allocated which must be a positive integer
 *
 *Return: pointer to the allocated memory,but terminate if malloc fails
 *
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = (int *)malloc(b * sizeof(int));
	if (p == NULL)
	{
		return (98);
	}
	else
	{
		return (p);
	}
}
