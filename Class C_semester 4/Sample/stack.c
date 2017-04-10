#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 8

bool full(int);
bool empty(int);
void addS(int[], int*, int);
void rmS(int[], int*);
void printS(int[], int t);

int main(int argc, char *argv[]) {
	int stack[MAX] = {0};
	int top = -1;
	int temp;
	char input;
	while ((input = getchar()) != 'q') {
			switch (input) {
				case 'a':
					scanf("%d", &temp);
					addS(stack, &top, temp);
					break;
				case 'r':
					rmS(stack, &top);
					break;
				default:
					puts("Input 'a' to add 'r' to remove 'q' to quit.");
			}
			while (getchar() != '\n')
				continue;//ignore invalid input
			puts("result:");
			printS(stack, top);
		}
	return 0;
}

bool full(int t) {
	if (t == MAX-1) 
		return true;
	else 
		return false;
}

bool empty(int t) {
	if (t == -1) 
		return true;
	else 
		return false;
}

void addS(int s[], int *t, int add) {
	if (full(*t)) {
		puts("This stack is full.");
		return;
	} else {
		s[++(*t)] = add;
		return;
	}
}

void rmS(int s[], int *t) {
	if (empty(*t)) {
		puts("This stack is empty.");
		return;
	} else {
		s[(*t)--] = 0;
		return;
	}
}

void printS(int s[], int t) {
	for (int i = 0; i <= t; i++) 
		printf("%d", s[i]);
	puts("");
	return;
}