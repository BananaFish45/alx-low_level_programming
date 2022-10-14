#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: Mandatory parameter
 *
 * Return: the sum, otherwise 0.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    unsigned int i = 0, nSum = 0;

    if (n != 0)
    {
        va_start(args, n);
        while (i < n)
        {
            nSum += va_arg(args, int);
            i++;
        }
        va_arg(args);
        return (nSum);
    }

    return (0);
}