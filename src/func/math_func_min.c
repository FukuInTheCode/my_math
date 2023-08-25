#include "../../includes/my.h"

double my_func_min(math_function func, double start, double end)
{
    double minVal = func(start);
    for (double x = start; x <= end; x += 0.001) {
        double y = func(x);
        if (y < minVal)
            minVal = y;
    }

    return minVal;
}
