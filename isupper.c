#include "headerfile.h"

/**
 * isupper - return 1 if argument is uppercase, 0 otherwise
 * @arg: argument
 * Return: 0 or 1
 */
int isupper(char arg)
{
	if (arg >= 'a' && arg <= 'z')
		return (1);
	else
		return (0);
}
