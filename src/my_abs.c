#include "my.h"

double my_abs(double x)
{
    return x * ((x >= 0.) - (x < 0.));
}
