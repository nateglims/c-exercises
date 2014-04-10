#include <stdio.h>

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = upper;

	/*I know I could have used a for loop, but this seemed easier.*/
	printf("Fahrenheit Celsius\n");
	printf("----------------------\n");

	while (fahr > lower) {
		fahr = (9.0/5.0) * (celsius + 32.0);
		printf("%3.0f       %6.1f\n", celsius, fahr);
		celsius = celsius + step;	}
	return 0;
}