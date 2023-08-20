#include "main.h"
#include <string.h>

/**
 * handle_strings - print string
 * @args:arguements
 *
 * Return: Number of strings printed
 */

int handle_strings(va_list args)
{
	char *s = va_arg(args, char *);

	write(1, s, strlen(s));

	return (strlen(s) - 1);
}
