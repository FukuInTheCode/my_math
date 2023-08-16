#pragma once
#define MYH

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include "./my_math.h"


static inline __attribute__((always_inline)) void swap(double *a, double *b)
{
    const int temp = *a;
    *a = *b;
    *b = temp;
}
