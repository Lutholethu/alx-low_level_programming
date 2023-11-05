#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: allocated memory
 * Return: pointer to the allocated memory, return 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);

	else
		return (i);
}
