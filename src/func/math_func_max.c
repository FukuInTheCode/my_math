#include "../../includes/my.h"

double my_func_max(math_function func, double start, double end)
{
    double maxVal = func(start);
    for (double x = start; x <= end; x += 0.001) {
        double y = func(x);
        if (y > maxVal)
            maxVal = y;
    }

    return maxVal;
}
