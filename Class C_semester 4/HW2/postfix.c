#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 20

void inToPostfix(char*, char*);
int priority(char);
int eval(char*);
int cal(int, int, char);

int main(void) {
	char formula[MAX];
	puts("Input:");
	scanf("%s", formula);
	printf("Ans: %d", eval(formula));
	return 0;
}

void inToPostfix(char* infix, char* postfix) {
	char stack[MAX] = "";
	int j=0, top=-1;
	for (int i=0; infix[i] != '\0'; i++)
		switch(infix[i]) {
			case '(':
				stack[++top] = infix[i];
				break;
			case ')':
				while(stack[top] != '(')
					postfix[j++] = stack[top--];
				top--;
				break;
			case '+':
			case '-':
			case '*':
			case '/':
				while(priority(infix[i]) < priority(stack[top]))
					postfix[j++] = stack[top--];
				stack[++top] = infix[i];
				break;
			default:
				postfix[j++] = infix[i];
		}
	while(top > -1)
		postfix[j++] = stack[top--];
	puts(postfix);
	return;
}

int priority(char op) {
	switch(op) {
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		default:
			return 0;
	}
}

int eval(char* formula) {
	int stack[MAX] = {0};
	char postfix[MAX] = "";
	char num[2] = "";
	inToPostfix(formula, postfix);
	int top=-1;
	for (int i=0; postfix[i] != '\0'; i++)
		switch(postfix[i]) {
			case '+':
			case '-':
			case '*':
			case '/':
				stack[top-1] = cal(stack[top], stack[top-1], postfix[i]);
				top--;
				break;
			default:
				num[0] = postfix[i];
				stack[++top] = atoi(num);
		}
	return stack[top];
}

int cal(int a, int b, char op) {
	switch(op) {
		case '+':
			return a+b;
		case '-':
			return a-b;
		case '*':
			return a*b;
		case '/':
			return a/b;
		default:
			exit(EXIT_FAILURE);
	}
}
