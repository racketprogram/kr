#include <stdio.h>
#include <ctype.h>

int getint(int *pn)
{
	int c;

	while (isspace(c = getchar()))
		;
	for (*pn = 0; isdigit(c); c = getchar())
		*pn = 10 * *pn + (c - '0');
	return c;
}

int main(void)
{
	int n = 10;
	int array[10];
	
	for (n = 0; getint(&array[n]) != EOF; n++) {
		printf("%d\n", array[n]);
	}
	return 0;
}
