#include <stdlib.h>
#include <stdio.h>

typedef struct NODE {
	int value;
	struct NODE *next;
} Node;

void insert(Node **root, int new_value)
{
	Node *cur;
	Node *pre;
	Node *new;

	cur = *root;
	pre = NULL;

	while (cur != NULL && cur->value < new_value) {
		pre = cur;
		cur = cur->next;
	}
	
	new = (Node*)malloc(sizeof(Node));
	new->value = new_value;
	
	new->next = cur;

	if (pre == NULL) {
		*root = new;
	} else {
		pre->next = new;
	}
}


int main(void)
{
	Node a = {5,NULL};
	Node *pa = &a;
	Node *p;
	insert(&pa, 4);
	insert(&pa, 3);
	insert(&pa, 1);
	insert(&pa, 2);

	for (p = pa; p != NULL; p = p->next) {
		printf("%d\n", p->value);
	}
		
	return 0;
}
	


