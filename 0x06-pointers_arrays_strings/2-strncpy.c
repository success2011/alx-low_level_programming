#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	in j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		des[j] = src[j];
		j++;
	}

	return (dest);
}
