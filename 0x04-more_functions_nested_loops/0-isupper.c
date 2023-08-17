#include "main.h"

/**
 * _isupper - Check if a character is upper
 * @x: The number is to be checked
 * Return: 1 for upper character or 0 if anything else
 */

int _isupper(int x)

{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
