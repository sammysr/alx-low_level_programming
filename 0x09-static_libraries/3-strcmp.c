#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: A pointer to the frist string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of the frist unmatched char
 * If str1 == str2, 0.
 * If str1 > str2, the postive difference of the frist unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
