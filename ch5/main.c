#include <stdio.h>
#include <string.h>
#include "qsort.h"
#include "getline.h"
#include "alloc.h"
#define MAXLINES 5000
#define MAXLEN 1000

char *lineptr[MAXLINES];

void mystrcpy(char *s, char *t)
{
	while (*s++ = *t++)
		;
}

int readlines(char *lineptr[], int maxlines)
{
	int len, nlines;
	char *p, line[MAXLEN];

	nlines = 0;
	while ((len = mygetline(line, MAXLEN)) > 0) {
		if (nlines >= maxlines || (p = alloc(len)) == NULL) {
			return -1;
		} else {
			line[len - 1] = '\0';
			mystrcpy(p, line);
			lineptr[nlines++] = p;
		}
	}
	return nlines;
}

void writelines(char *lineptr[], int nlines)
{
	int i;
	
	for (i = 0; i < nlines; i++) {
		printf("%s\n", lineptr[i]);
	}
}

int main(void)
{
	int nlines;
	
	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		qsort(lineptr, 0, nlines - 1);
		writelines(lineptr, nlines);
		return 0;
	} else {
		printf("error: input too big to sort\n");
		return 1;
	}
}
