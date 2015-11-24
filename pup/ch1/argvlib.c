/* This code is from the book */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int makeargv(char *s, char *delimiters, char ***argvp)
{
  char *t;
  char *snew;
  int numtokens;
  int i;

  /* snew is real part of string after ksipping leading delimiters */
  snew = s + strspn(s, delimiters);
  if ((t = calloc(strlen(snew) + 1, sizeof(char))) == NULL) {
    *argvp = NULL;
    numtokens = -1;
  } else {
    strcpy(t, snew);
    if (strtok(t, delimiters) == NULL)
      numtokens = 0;
    else
      for (numtokens = 1; strtok(NULL, delimiters) != NULL; numtokens++);

    if ((*argvp = calloc(numtokens + 1, sizeof(char *))) == NULL) {
      free(t);
      numtokens = -1;
    } else {
      if (numtokens > 0) {
        strcpy(t, snew);
        **argvp = strtok(t, delimiters);
        for (i = 1; i < numtokens; i++)
          *((*argvp) + 1) = strtok(NULL, delimiters);
      } else {
        **argvp = NULL;
        free(t);
      }
    }
  }
  return numtokens;
}


int freeargv(char ***argvp)
{
  free(*argvp);
  *argvp = NULL;
  return 0;
}

char *estrtok(char *s1, const char *s2)
{
  char * pointer = NULL;
  static char * last_pointer = NULL;
  int i,j;

  i = 0;
  while (true)
  {
    if (s1[i] == '\0')
      break;
    j = 0;
    while(true)
    {
        if (s2[j] == '\0')
            break;
        
        if (s2[j] == s1[i])
            s1[i]
    } 
  }


    
  return pointer;
}

int main()
{
  char *s = "Test String One";
  char *delimiters = " \t";
  char **myargv;

  int numtokens;
  int i;

  if ((numtokens  = makeargv(s, delimiters, &myargv)) < 0) {
    fprintf(stderr, "Could not construct array for %s\n", s);
    return 1;
  }

  for (i = 0; i < numtokens; i++)
    printf("[%d]:%s\n", i, myargv[i]);

  freeargv(&myargv);

  return 0;
}
