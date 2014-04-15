#include <stdio.h>

int main()
{
	int c;
	char last_char;

	last_char = EOF;

	while ((c = getchar()) != EOF) {
		if (c == ' ' && last_char == ' ') {
			continue;
		}

		printf("%c",c);
		last_char = c;
	}

	return 0;
}
 
