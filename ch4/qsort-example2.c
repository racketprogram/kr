#include <stdio.h>

void swap(int [], int, int);
void qsort(int [], int, int);

int main(void)
{
	int v[11] = { 9, 5, 8, 4, 7, 3, 6, 2, 5, 1, 0 };
	int i;
	qsort(v, 0, 10);
	for (i = 0; i <= 10; i++) {
		printf("%d ", v[i]);
	}
	putchar('\n');
	return 0;
}

void swap(int v[], int i, int j)
{
	int temp;
	
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

void qsort(int v[], int left, int right)
{
	int i, last;
	
	if (left >= right) 
		return;
	
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
