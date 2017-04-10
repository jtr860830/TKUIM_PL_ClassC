#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 8

int calculate(char[]);

int main(int argc, char *argv[]) {
	char stack[MAX] = {'\0'};
	scanf("%s", stack);
	printf("%d\n", calculate(stack));
	return 0;
}

int calculate(char s[]) {
	int t[MAX] = {0};
	int top = -1;
	char opn[2] = {'\0'};
	for (int i = 0; s[i] != '\0'; i++)
		switch (s[i]) {
			case '+':
				t[top-1] += t[top];
				top--;
				break;
			case '-':
				t[top-1] -= t[top];
				top--;
				break;
			case '*':
				t[top-1] *= t[top];
				top--;
				break;
			case '/':
				t[top-1] /= t[top];
				top--;
				break;
			default:
				opn[0] = s[i];
				t[++top] = atoi(opn);
		}
	return t[top];
}