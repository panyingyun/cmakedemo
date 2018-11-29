
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

	double c = msqrt(a, b);
	double d = msquare(a, b);

	printf("sqrt(%f) + sqrt(%f) = %f\n", a, b, c);
	printf("square(%f) + square(%f) = %f\n", a, b, d);
	return 0;
}