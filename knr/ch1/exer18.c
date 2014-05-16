#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxline);
int strip_trailing_whitespace(char line[], int len);

int main()
{
	int len;
	int threshold;
	char line[MAXLINE];
	
	threshold = 80;
	while ((len = my_getline(line, MAXLINE)) > 0)
	{
		strip_trailing_whitespace(line,len);
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
int strip_trailing_whitespace(char line[], int len)
{
	int i;

	/* The format for the string will always end in [\n][\0]. Found on page
	 * 30 of K&R
	 */
	if (len < 2)
	{
		line[0]='\0';
		goto done;
	} 
	else
       	{
		for (i = (len - 2); i > 0; i--)
		{
			if (line[i] != ' ' && line[i] != '\t')
			{
				goto done;
			} else {
				line[i] = '\n';
				line[i+1] = '\0';
			}
		}
	}
	done:
		return 0;
}

