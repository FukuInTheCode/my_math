#include "../../includes/my.h"

double my_min(double *x, size_t size)
{
    if (x == NULL)
        return 0.0;

    double min = x[0];
    for (size_t i = 1; i < size; i++) {
        if (x[i] < min) {
            min = x[i];
        }
    }
    return min;
}

double my_min_between(double x1, double x2)
{
    return (x1 < x2) ? x1 : x2;
}
