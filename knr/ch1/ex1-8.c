#include <stdio.h>

int main()
{
	int c, blanks, tabs, newlines;
	blanks = 0;
	tabs = 0;
	newlines = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			blanks++;
		} else if (c == '\t') {
			tabs++;
		} else if (c == '\n') {
			newlines++;
		}
	}

	printf("Spaces:   %d\n", blanks);
	printf("Tabs:     %d\n", tabs);
	printf("NewLines: %d\n", newlines);


	return 0;
}
 
