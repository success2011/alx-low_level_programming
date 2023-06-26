#include "main.h"
/**
 * _strlen - returns the length of a string
 * @v: string
 * Return: length
 */
int _strlen(char *v)
{
	int longi = 0;

	while (*v != '\0')
	{
		longi++;
		v++;
	}

	return (longi);
}
