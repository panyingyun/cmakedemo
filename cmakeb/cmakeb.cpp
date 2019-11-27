
#include <stdio.h>
#include <stdlib.h>
#include "msqrt/msqrt.h"
#include "msquare/msquare.h"

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: input double a and  double b\n");
        return 1;
    }

    double a = atof(argv[1]);
    double b = atof(argv[2]);

#ifdef USE_SQRT
    double c = msqrt(a, b);
    printf("APP Open Macro USE_SQRT\n");
    printf("sqrt(%f) + sqrt(%f) = %f\n", a, b, c);
#else
    printf("APP Close Macro USE_SQRT\n");
    double d = msquare(a, b);
    printf("square(%f) + square(%f) = %f\n", a, b, d);
#endif  // USE_SQRT
    return 0;
}