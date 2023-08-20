#ifndef MAIN_H
#define MAIN_H

#include  <stddef.h>
#include  <unistd.h>
#include <stdarg.h>

typedef struct
{
	const char *specifier;
	int (*function)(va_list);
}FunctionPairs;
int _printf(const char *format,...);
int handle_characters(va_list args);
int handle_percent(va_list args);
int handle_strings(va_list args);
#endif
