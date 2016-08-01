#include <stdio.h>

int main(void)
{
	int a[] = {1,2,3,4,5};
	
	int *p = (int *)(&a + 1);

	printf("%d %d\n", *p, *(p - 1));
	
	return 0;
}
