#include <stdio.h>
#include <stdlib.h>

void strcpyy(char *a, char *b)
{
	int i = 0;
	char *pa = a;
	while (*pa++)
		i++;
	char new[] = (char[])malloc((i+1) * sizeof(char));
	while (*new++ = a++)
		;

	*b = new;
}

int main(void)
{

	char a[] = "abc123";
	char *b = NULL;

	strcpyy(a,&b);

	printf("%s\n", b);

	return 0;
}
		
		
