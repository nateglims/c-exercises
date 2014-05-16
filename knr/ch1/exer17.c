#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxline);

int main()
{
	int len;
	int threshold;
	char line[MAXLINE];
	
	threshold = 80;
	while ((len = my_getline(line, MAXLINE)) > 0)
		if (len > threshold)
			printf("%s",line);

	return 0;
}

int my_getline(char line[], int maxline)
{
	int c,i;

	for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		line[i] = c;

	if (c == '\n')
	{
		line[i] = c;
		i++;
	}

	line[i] = '\0';
	return i;
}
