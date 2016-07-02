#ifndef ALLOC_H
#define ALLOC_H
#define ALLOCSIZE 1000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

extern char *alloc(int);
extern void afree(char *);

#endif
