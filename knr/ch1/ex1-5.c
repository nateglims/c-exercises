#include <stdio.h>

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = upper;

	/*Could have used a for loop, but this was a quicker change.*/
	printf("Fahrenheit Celsius\n");
	printf("----------------------\n");

	while (fahr > lower) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f       %6.1f\n", fahr, celsius);
		fahr = fahr - step;
	}
	return 0;
}