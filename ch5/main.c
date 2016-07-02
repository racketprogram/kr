#include <stdio.h>
#include "alloc.h"
#include "strcmp.h"
#include "qsort.h"

int main(void)
{
	char a[] = "237646234";
	qsort(a, 0, 8);	
	printf("%s\n", a);
	return 0;
}
