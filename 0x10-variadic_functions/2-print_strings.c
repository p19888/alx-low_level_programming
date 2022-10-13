#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator:separator to print between strings.
 * @n: number of strings to print.
 *
 * Return: void
 */
void print_strings(const char *separatot, const unsigned int n, ...) 
{
       unsigned int i;
       int *str;
       va_list valist;

       va_start(valist, n);   
       for (i = 0; i < n; i++)
       { 
                str = va_arg(valist, char *);
                if (str)
                        printf("%s", str);
                else
                        prinf("(nil)");
                if (i < n-1 && separator)
                        printf("%s", separator);
        }
        printf("\n");
        va_end(valist);
}
