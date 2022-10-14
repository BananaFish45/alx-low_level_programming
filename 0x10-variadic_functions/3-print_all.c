#include "variadic_functions.h"
/**
 * print_all - prints anything
 *
 * @format: fotmat of characters (ceis)
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
    characters arraychars[] = {
        {"c", printchar},
        {"i", printinteger},
        {"f", printfloat},
        {"s", printstring},
        {NULL, NULL}};
    int runf = 0;
    int runarr = 0;
    char *spacecomma = "";
    va_list charlist;

    va_start(charlist, format);

    while (format != NULL && format[runf] != '\0')
    {
        runarr = 0;
        while (runarr < 4)
        {
            if (format[runf] == *arraychars[runarr].arguments)
            {
                printf("%s", spacecomma);
                arraychars[runarr].ptrfunc(charlist);
                spacecomma = ", ";
                break;
            }
            runarr++;
        }
        runf++;
    }
    printf("\n");
    va_end(charlist);
}

/**
 * printchar - prints a char
 *
 * @charlist: type va_list that iterates through the arguments
 *
 * Return: void
 */
void printchar(va_list charlist)
{
    printf("%c", va_arg(charlist, int));
}

/**
 * printinteger - prints an integer
 *
 * @charlist: type va_list that iterates through the arguments
 *
 * Return:void
 */
void printinteger(va_list charlist)
{
    printf("%d", va_arg(charlist, int));
}

/**
 * printfloat - prints a double
 *
 * @charlist: type va_list that iterates through the arguments
 *
 * Return: void
 */
void printfloat(va_list charlist)
{
    printf("%f", va_arg(charlist, double));
}

/**
 * printstring - prints a string
 *
 * @charlist: type va_list
 *
 * Return: void
 */
void printstring(va_list charlist)
{
    char *str;

    str = va_arg(charlist, char *);
    if (str == NULL)
        str = "(nil)";
    printf("%s", str);
}