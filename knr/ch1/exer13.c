#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_WORD_LEN 15

void init_histo(int * histo,int n)
{
	int i;
	for(i = 0;i < n;i++)
	{
		histo[i] = 0;
	}
}

int main ()
{
	int c, word_length,i,j;
	int histo[MAX_WORD_LEN];
	word_length = 0;

	init_histo(histo,MAX_WORD_LEN);
	
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			histo[word_length]++;
			word_length = 0;
		}
		else
		{
			word_length++;
		}


		if (word_length > MAX_WORD_LEN)
		{
			printf("Found word longer than 15 chars\n");
			return 1;
		}

	}

        for(i=0; i<MAX_WORD_LEN; i++)
        {
           printf("Word size %d : ", i);
           for (j = 0; j < histo[i]; j++)
           {
               printf("*");
           }
           printf("\n");
        } 

	return 0;
}


