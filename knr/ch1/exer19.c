#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxline);
int reverse(char line[], int len);

int main()
{
	int len;
	char line[MAXLINE];
	
	while ((len = my_getline(line, MAXLINE)) > 0)
	{
		reverse(line,len);
		printf("%s",line);
	}

	return 0;
}

int my_getline(char line[], int maxline)
{
	int c;
	int i;

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

/* Not very safe */
int reverse(char line[], int len)
{
	int i;
	char tmp;
	int chomp;
	chomp = len - 2;

	for (i = 0; i < chomp/2; i++)
	{
		tmp = line[i];
		line[i] = line[chomp - i];
		line[chomp - i] = tmp;
	}
}

