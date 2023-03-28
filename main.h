#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <ctype.h>

#define BUFFSIZE 1024

/**
 * struct specifier_func - Struct to specify the function to use
 * for a given conversion specifier
 * @specifier: The conversion specifier character
 * @f: The function to use for the specifier
 */

typedef struct specifier_func
{
	char specifier;
	int (*f)(va_list, char *, int, int);
} specifier_func_t;

int _putchar(char character);
int _printf(const char *format, ...);
int print_char(va_list args, char *buffer, int flags, int width);
int print_string(va_list args, char *buffer, int flags, int width);
int print_percent(va_list args, char *buffer, int flags, int width);
int print_digit(int d, int count);
int print_udigit(unsigned int d, int count);
void print_format(va_list args, const char **p, int *count);

int handle_format(const char *format, va_list args, char *buff, int buff_idx);

#endif /* MAIN_H */
