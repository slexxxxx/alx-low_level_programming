#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		value <<= 1;
		if (b[i] == '1')
			value += 1;
		i++;
	}

	return (value);
}
