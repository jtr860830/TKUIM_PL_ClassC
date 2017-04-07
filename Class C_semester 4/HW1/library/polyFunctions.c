#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "polyFunctions.h"

void printPoly(poly* target) {
    for (int i = target->degree; i >= 0; i--) 
        if (target->coef[i] != 0) 
            printf("%+d(X＾%d)", target->coef[i], i);
    return;
}

poly getPoly(void) {
    poly get = zero();
    int expo;
    puts("Please enter two numbers as polynomial's exponents and coefficients:");
    while (scanf("%d", &expo) == 1) 
        scanf("%d", &(get.coef[expo]));
    while (getchar() != '\n') continue;
    get.degree = leadExp(get);
    return get;
}

poly zero(void) {
    poly toZero = {
        .degree = 0
    };
    return toZero;
}

bool isZero(const poly* test) {
    if (test->degree == 0 && test->coef[0] == 0) 
        return false;
    else 
        return true;
}

int getCoef(const poly* getCoef, int expo) {
    return getCoef->coef[expo];
}

int leadExp(poly getDegree) {
    for (int i = MAX-1; i >= 0; i--) {
        if (getDegree.coef[i] != 0)
            return i;
    }
    return 0;
}

void attachTarget(poly* target, int addExpo, int addCoef) {
    if (target->coef[addExpo] != 0) {
        puts("This object is already exist.");
        return;
    }
    target->coef[addExpo] = addCoef;
    if (addExpo > target->degree) 
        target->degree = addExpo;
    return;
}

void removeTarget(poly* target, int rmExpo) {
    target->coef[rmExpo] = 0;
    if (rmExpo == target->degree) {
        for (int i = rmExpo; i >= 0; i--) 
            if (target->coef[i] != 0) {
                target->degree = i;
                return;
            }
    }
    return;
}

void singleMult(poly* target, int multCoef, int multExpo) {
    if (multExpo + target->degree >= MAX) {
        puts("this polynomial can not be calculate.");
        return;
    }
    for (int i = target->degree; i >= 0; i--) 
        if (target->coef[i] != 0) {
            target->coef[i + multExpo] = target->coef[i] * multCoef;
            target->coef[i] = 0;
        }
    target->degree += multExpo;
    return;
}

poly add(poly add1, poly add2) {
    poly result;
    result.degree = add1.degree >= add2.degree ? add1.degree : add2.degree;
    for (int i = result.degree; i >= 0; i--) 
        if (add1.coef[i] != 0 || add2.coef[i] != 0)
            result.coef[i] = add1.coef[i] + add2.coef[i];
    return result;
}

poly mult(poly mult1, poly mult2) {
    if (mult1.degree + mult2.degree >= MAX) {
        puts("These polynomial cannot be multiply");
        exit(EXIT_FAILURE);
    }
    poly result = {.degree = mult1.degree + mult2.degree};
    for (int i = mult1.degree; i >= 0; i--) 
        if (mult1.coef[i] != 0) {
            for (int j = mult2.degree; j >= 0; j--) 
                if (mult2.coef[j] != 0) {
                    result.coef[i + j] += mult1.coef[i] * mult2.coef[j];
                }
        }
    return result;
}