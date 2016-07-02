#include <stdio.h>
#define IN 1
#define OUT 0

int main(void)
{
	int c, nw, nl, nc, state;

	state = OUT;
	nl = 0;
	nw = 0;
	nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
		if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nc, nw, nl);
	return 0;
}
