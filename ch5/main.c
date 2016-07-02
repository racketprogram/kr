#include <stdio.h>
#include "qsort.h"

int main(void)
{
	char *a = "54321";
	qsort(&a, 0, 5);	
	printf("%s\n", a);
	return 0;
}
