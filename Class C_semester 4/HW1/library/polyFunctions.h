#include <stdio.h>
#include <stdbool.h>
#define MAX 11
#define END "exit"

typedef struct polynomial {
    int degree;
    int coef[MAX];
} poly;

void printPoly(poly*);
poly getPoly(void);
poly zero(void);
bool isZero(const poly*);
int getCoef(const poly*, int);
int leadExp(poly);
void attachTarget(poly*, int, int);
void removeTarget(poly*, int);
void singleMult(poly*, int, int);
poly add(poly, poly);
poly mult(poly, poly);