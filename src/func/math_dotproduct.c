#include "../../includes/my.h"

double dot_product(double* a, double* b, unsigned int size)
{
    unsigned int i;

    double result = 0;
    for (i = 0; i < size; i++)
        result += a[i]*b[i];

    return result;
}
