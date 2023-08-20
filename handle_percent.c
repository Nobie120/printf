#include "main.h"

/**
 * handle_percent - handles percent(%%)
 * @args:arguements
 *
 * Return:num of charcters
 */

int handle_percent(va_list args)
{
	char b = '%';

	(void)args;
	write(1, &b, 1);

	return (0);
}
