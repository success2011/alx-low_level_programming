#include "main.h"
#include <unistd.h>
/**
 * _putchar - This is to write chara c
 * @c: This is the character that is for print
 *
 * Return: Success is on 1.
 * -1 is on Error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
