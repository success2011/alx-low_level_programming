#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Returen: If c is found - a pointer to first occurranc
 * if c is not found - Null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
