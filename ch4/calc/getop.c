#include <stdio.h>
#include <ctype.h>
#include "calc.h"

int getop(char s[])
{
	int i, c;
	static int lastc = 0;

	if (lastc == 0) { 
		c = getchar();
	
	} else {
		c = lastc;
		lastc = 0;
	}	

	while (c == ' ' || c == '\t')
		c = getchar();
	
	s[0] = c;
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c;
	i = 0;
	if (isdigit(c))
		while (isdigit(s[++i] = c = getchar()))
			;
	if (c == '.')
		while (isdigit(s[++i] = c = getchar()))
			;
	s[i] = '\0';
	lastc = c;
	return NUMBER;
}
