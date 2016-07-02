#include <stdio.h>

int my_strlen(char *s)
{
	int n;
	
	for (n = 0; *s != '\0' ; s++) {
		n++;
	}
	return n;
}

int main(void)
{
	char *str = "Hello world";
	char a[10] = "Hi";	
	int len = my_strlen(str);
	printf("%s length is: %d\n", str, len);
	printf("%s\n", a);
	
	return 0;
}
