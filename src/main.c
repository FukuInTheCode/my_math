#include "../includes/my.h"

int main(int argc, char *argv[])
{
    srand(time(NULL));
    printf("%f\n", my_randfloat(0, -1));
    printf("%i\n", my_randint(0, -10));

    return 0;
}
