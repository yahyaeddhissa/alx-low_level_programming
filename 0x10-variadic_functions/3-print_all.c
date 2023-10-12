#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 *
 * Return: 0 (Success)
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str, *separator = "";
    char c;

    va_start(args, format);

    while (format && format[i])
    {
        c = format[i];

        switch (c)
        {
            case 'c':
                printf("%s%c", separator, va_arg(args, int));
                break;
            case 'i':
                printf("%s%d", separator, va_arg(args, int));
                break;
            case 'f':
                printf("%s%f", separator, va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    str = "(nil)";
                printf("%s%s", separator, str);
                break;
            default:
                i++;
                continue;
        }
        separator = ", ";
        i++;
    }

    printf("\n");
    va_end(args);
}
