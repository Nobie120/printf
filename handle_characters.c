#include "main.h"

/**
 * handle_characters - print characters
 * @args:The arguement list
 * Return:Number of characters printed
 */

int handle_characters(va_list args)
{
	char c = va_arg(args, int);
	write(1, &c, 1);

	return (1);
}
