#ifndef MAIN_H
#define MAIN_H

#include  <stddef.h>
#include  <unistd.h>
#include <stdarg.h>

/**
 * FunctionPairs - holds function pointers and specifiers
 * @specifier:these are the format specifiers
 * @function:Function to pointers
 */

typedef struct
{
	const char *specifier;
	int (*function)(va_list);
} FunctionPairs;

int _printf(const char *format, ...);
int handle_characters(va_list args);
int handle_percent(va_list args);
int handle_strings(va_list args);
int handle_int(va_list args);

#endif
