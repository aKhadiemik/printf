#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

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
int _printf(const char *format, ...);
void digit(int d);
/**
 * int print_int(va_list args, char *buffer, int flags, int width);
 * int print_unsigned(va_list args, char *buffer, int flags, int width);
 * int print_binary(va_list args, char *buffer, int flags, int width);
 * int print_octal(va_list args, char *buffer, int flags, int width);
 * int print_hex(va_list args, char *buffer, int flags, int width);
 * int print_HEX(va_list args, char *buffer, int flags, int width);
 * int print_rot13(va_list args, char *buffer, int flags, int width);
 */

int handle_format(const char *format, va_list args, char *buffer, int buffer_index);

#endif /* MAIN_H */
