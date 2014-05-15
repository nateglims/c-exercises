#include <stdio.h>

float far_to_cel(int);

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	/*Added this header. Added an arbitrary amount of spaces to the print statement in the loop.*/
	printf("Fahrenheit Celsius\n");
	printf("----------------------\n");

	while (fahr < upper) {
		celsius = far_to_cel(fahr);
		printf("%3.0f       %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}

float far_to_cel(int far)
{
	return (5.0/9.0) * (far - 32.0);
}
