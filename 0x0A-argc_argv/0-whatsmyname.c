#include <stdio.h>
#include <string.h>
/*
 *main - Entry point
 *
 *Return: always 0
 */
int main(int argc, char  *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv(%d): %s\n", i, argv[i]);
	}
	return (0);
}
