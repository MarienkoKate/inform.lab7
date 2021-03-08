#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "fuct.h"

int main() {
	long double x, z, eps;
	long double m = 0;
	long double a = 1;
	int ind = -1;
	printf("Enter the x and epsilon.\nNote that 0 < epson < 1\n");
	if ((scanf("%lf", &x) == 1 && scanf("%lf", &eps) == 1)) {
		z = x;
		m = fabs(eps);
		ind = 1;
		if (m >= 1) {
			printf("Please, enter the correct epsilon");
			return -1;
		}
		else if (m < 1 && m >= 0 ) {
			if (ind == 0) {
				x = cos(x, m);
				//printf("cos(x) %.15lf \n", x);
			}
			if (ind == 1) {
				x = sin(x, m);
				printf(" %.15lf \n", x);
			}
			
		}
	}
	else return -1;

	return 0;
}
