#include "main.h"

/**
 * handle_reverse - prints the reverse string
 * @args:ARguements
 *
 * Return: int
 */

int handle_reverse(va_list args)
{
	int i, len = 0;
	char *s = va_arg(args, char *);

	while(s[len] != '\0')
		len++;

	for(i = len - 1; i >= 0; i--)
	{
		write(1, &s[i], 1);
	}

	return (len);
}
