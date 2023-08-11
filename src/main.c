#include "../includes/my.h"

int main(int argc, char *argv[]) {
    double a[] = {1, 2};
    double b[] = {0.5, 0.5};

    printf("%f", dot_product(a, b, 2));

    return 0;
}
