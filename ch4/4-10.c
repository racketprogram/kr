#include <stdio.h>

void swap(int [], int, int);

void qsort(int v[], int left, int right)
{
	int i, last;
	
	for (i = 0; i <= 9; i++) { 	
		printf("%d ",v[i]);
	}
	putchar('\n');
	
	if (left >= right) {
		return;
	}
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++) {
		if (v[i] < v[left]) {
			swap(v, ++last, i);
		}
	}	
	swap(v, left, last);
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);
}

void swap(int v[], int i, int j)
{
	int temp;
	
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}	

int main(void)
{
	int s[10] = { 1, 3, 5, 4, 8, 6, 7, 0, 9, 2 };
	int i = 0;	
	qsort(s, 0, 9);
	for (i = 0; i <= 9; i++) { 	
		printf("%d ",s[i]);
	}
	putchar('\n');	
	return 0;
}	
