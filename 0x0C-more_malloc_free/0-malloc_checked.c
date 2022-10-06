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
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
