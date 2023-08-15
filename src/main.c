#include "../includes/my.h"

int main(int argc, char *argv[]) {
    if(argc<3) return 84;

    printf("%f, %f \n", my_abs(atoi(argv[1])), my_abs(atoi(argv[2])));

    printf("%d\n", my_gcd(my_abs(atoi(argv[1])), my_abs(atoi(argv[2]))) );

    return 0;
}
