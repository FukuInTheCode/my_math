#include "../includes/my.h"

int main(int argc, char *argv[]) {
    if(argc<2) return 84;

    printf("%f\n", my_abs(atoi(argv[1])));

    return 0;
}
