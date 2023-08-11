#include "../includes/my.h"

int main(int argc, char *argv[]) {
    if(argc<2) return 84;
    double x = atoi(argv[1]);
    int n = atoi(argv[1])*3; // Number of terms in the Taylor series

    double approx = my_ln(x, n);
    double actual = log(x);

    printf("Approximation: %lf\n", approx);
    printf("Actual exp: %lf\n", actual);

    return 0;
}
