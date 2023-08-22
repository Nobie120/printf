#include "main.h"

int handle_int(va_list args)
{
	int num = va_arg(args, int);
	int printed = 0, divisor;

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		printed++;
	}

	divisor = 1;
	while (num / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		char digit = '0' + (num / divisor);
		write(1, &digit, 1);
		num %= divisor;
		divisor /= 10;
		printed++;
	}

	return printed;
}
