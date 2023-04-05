#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the charater c to stdout
 * @c: the character to print
 * Return: on sucess 1,
 * On error, -1 is returned, and errorno is set appropriately.
 */
int _puthar(char c)
{
	return (write(1, &c, 1));
}
