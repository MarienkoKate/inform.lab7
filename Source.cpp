#include <stdio.h>
#include <math.h>

double factorial(double n) {
	return (n < 2) ? 1 : n * factorial(n - 1);
}


long double sin(long double x,long double eps) {
	double sum = 0, k = 1, b = 0;
	double n;
		for (n = 0; fabs(k) >= eps; n++) {
			for (n = 0; fabs(k) >= eps; n++) {
				k = powf(x, n) / factorial(n);
				sum += k;
			}
		}
		return sum;
}
long double cos(long double x,long double eps) {
	long double sum = 0, k = 1, b = 0;
	long double n;
	for (n = 0; fabs(k) >= eps; n++) {
		b = n * 2;
		k = powf(-1, n) * (powf(x, b) / factorial(b));
		sum += k;
	}
	return sum;
}
// 
