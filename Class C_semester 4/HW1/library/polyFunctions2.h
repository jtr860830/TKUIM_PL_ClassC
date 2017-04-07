#include <stdio.h>
#include <stdbool.h>
#define MAX 8
#define AVAIL MAX/2

typedef struct polynomial {
    int expo;
    int coef;
} poly;

void getPoly(poly*, const int);
void zero(poly*);
bool isZero(const poly*);
void attachTarget(poly*, int, int);
void sort(poly*);
void add(poly*);