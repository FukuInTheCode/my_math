#include "../../includes/my.h"

double my_max(double *x, size_t size)
{
    if (x == NULL)
        return 0.0;

    double max = x[0];
    for (int i = 1; i < size; i++) {
        if (x[i] > max) {
            max = x[i];
        }
    }
    return max;
}

double my_max_between(double x1, double x2)
{
    return (x1 > x2) ? x1 : x2;
}
