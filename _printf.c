#include "main.h"

/**
 * _printf - prints anything according to the format specifier
 * @format:The format specifier
 * @...:arguements
 *
 * Return:0 on success
 */

int _printf(const char *format, ...)
{
	int printed_characters = 0, i = 0;
	va_list args;

	FunctionPairs pair[] = {
		{"s", handle_strings},
		{"c", handle_characters},
		{"%", handle_percent},
		{NULL, NULL},
	};

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			printed_characters++;
		}
		else
		{
			format++;
			i = 0;
			while (pair[i].specifier != NULL && *(pair[i].specifier) != *format)
				i++;

			if (pair[i].function != NULL)
				printed_characters += pair[i].function(args);	
		}
		format++;
	}
	va_end(args);

	return (printed_characters);
}
