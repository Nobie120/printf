#include "main.h"

<<<<<<< HEAD
void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: Format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			i++;
			printed_chars += handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed_chars == -1)
				return (-1);
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer - Prints the buffer if it's not empty
 * @buffer: Buffer to print
 * @buff_ind: Index for the buffer
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
=======
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
			while (pair[i].specifier != NULL && *(pair[i].specifier) != *format)
				i++;

			if (pair[i].function != NULL)
				printed_characters += pair[i].function(args);
		}
		format++;
	}
	va_end(args);

	return (printed_characters);
>>>>>>> 779fb927b1c220e2a81db19856d9e47451b0335d
}
