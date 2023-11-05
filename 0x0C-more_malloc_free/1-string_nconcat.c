#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes to be concatenated
 * Return: s1, followed by n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	char *concat = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	concat = malloc((s1_len + n + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	strncpy(concat, s1, s1_len);
	strncpy(concat + s1_len, s2, n);
	concat[s1_len + n] = '\0';

	return (concat);



}
