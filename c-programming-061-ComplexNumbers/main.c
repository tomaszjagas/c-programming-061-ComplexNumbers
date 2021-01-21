#include <stdio.h>
#include <complex.h>

#define __STDC_WANT_LIB_EXT1__ 1

int main() {

#ifdef __STDC_NO_COMPLEX__
	printf("Complex numbers are not supported.\n");
	exit(1);
#else
	printf("Complex numbers are supported.\n");

	double complex cx = 1.0 + 3.0 * I;
	double complex cy = 1.0 - 4.0 * I;

	printf("Working with complex numbers:\n");
	printf("Starting values: cx = %.2f%+.2fi, cy = %.2f%+.2fi\n", creal(cx), cimag(cx), creal(cy), cimag(cy));

	double complex sum = cx + cy;
	printf("\nThe sum cx + cy = %.2f%+.2fi\n", creal(sum), cimag(sum));
	double complex difference = cx - cy;
	printf("\nThe difference cx - cy = %.2f%+.2fi\n", creal(difference), cimag(difference));
	double complex product = cx * cy;
	printf("\nThe product cx * cy = %.2f%+.2fi\n", creal(product), cimag(product));
	double complex quotient = cx / cy;
	printf("\nThe quotient cx * cy = %.2f%+.2fi\n", creal(quotient), cimag(quotient));
	double complex conjugate = conj(cx);
	printf("\nThe conjugate of cx = %.2f%+.2fi\n", creal(conjugate), cimag(conjugate));

	double complex a = 32.123 + 24.456 * I;
	double complex b = 23.789 + 42.987 * I;
	double complex c = 3.0 + 2.0 * I;

	double complex sum1 = a + b;
	double complex pwr = cpow(a, c);

	printf("a is %f + %fi\n", creal(a), cimag(a));
	printf("b is %f + %fi\n", creal(b), cimag(b));
	printf("a + b is: %f + %fi\n", creal(sum1), cimag(sum1));
	printf("a - b is: %f + %fi\n", creal(a - b), cimag(a - b));
	printf("a * b is: %f + %fi\n", creal(a * b), cimag(a * b));
	printf("a / b is: %f + %fi\n", creal(a / b), cimag(a / b));
	printf("a ^ b is: %f + %fi\n", creal(pwr), cimag(pwr));

#endif // __STDC_NO_COMPLEX__

	return 0;
}