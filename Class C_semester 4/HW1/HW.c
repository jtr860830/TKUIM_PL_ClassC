#include <stdio.h>
#include <stdbool.h>
#define MAX 8
#define AVAIL MAX/2

typedef struct polynomial {
    int expo;
    int coef;
} poly;

void getPoly(poly*, const int);
void sort(poly*);
void addPoly(poly*);
void zero(poly*);

int main(void) {
    poly add[MAX];
    zero(add);
    getPoly(add, 4);
    addPoly(add);

    for (int i = AVAIL; i < MAX; i++) 
        if(add[i].coef != 0) 
            printf("%+d(X^%d)", add[i].coef, add[i].expo);
    return 0;
}

void getPoly(poly* target, const int item) {
    int start;
    for (int i = 0; i < MAX; i++)
        if (target[i].coef == 0) {
            start = i;
            break;
        }
    if (start+item > AVAIL) {
        puts("Too many object.");
        return;
    }
    for (int i = start; i < start+item; i++)
        scanf("%d%d", &(target[i].expo), &(target[i].coef));
    return;
}

void sort(poly* target) {
    int big;
    for (int i = 0; i < AVAIL-1; i++) {
        big = i;
        for (int j = i+1; j < AVAIL; j++) 
            if (target[j].expo > target[big].expo) {
                big = j;
            }
        poly temp = target[i];
        target[i] = target[big];
        target[big] = temp;
    }
    return;
}

void addPoly(poly* target) {
    sort(target);
    int blank = MAX-1;
    for (int i = 0; i < AVAIL; i++) 
        target[AVAIL+i] = target[i];
    for (int i = AVAIL; i < MAX-1; i++) 
        if (target[i].expo == target[i+1].expo && target[i].expo != 0) {
            target[i].coef += target[i+1].coef;
            for (int j = i+1; j < MAX-1; j++) 
                target[j] = target[j+1];
            target[blank].expo = 0;
            target[blank].coef = 0;
            blank--;
            i--;
        }
    return;
}

void zero(poly* target) {
    for (int i = 0; i < MAX; i++) {
        target[i].expo = 0;
        target[i].coef = 0;
    }
    return;
}