#include "main.h"
/**
 * _isupper - check if a letter is upper
 * @x: The numer to be checked
 * Return: 1 for upper or 0 for an else
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
