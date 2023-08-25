#include "../includes/my.h"

double fun(double x) {
    return x * x;
}

int main(int argc, char *argv[])
{
    srand(time(NULL));
    printf("%f\n", my_func_max(fun, -10, 10));
    printf("%f\n", my_func_min(fun, -10, 10));

    return 0;
}
