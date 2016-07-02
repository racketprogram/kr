#include <stdio.h>

char amessage[] = "now is the time";
char *pmessage = "now is the time";

int main(void)
{
	putchar(*amessage);
	putchar('\n');
	putchar(*pmessage);
	putchar('\n');
	printf("%s\n", pmessage);
	printf("%s\n", amessage);

	return 0;
}
