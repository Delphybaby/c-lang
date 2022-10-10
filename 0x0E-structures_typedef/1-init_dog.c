#include <stdio.h>
#include "dog.h"
/**
 *init_dog - the entry point
 *@d: pointer to structure
 *@name: name of the dog
 *@age: age of the dog
 *@owner: the name of the owner of the dog
 *
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	*d = {"bingo", 5, "ken"};
}
