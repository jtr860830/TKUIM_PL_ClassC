#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 8

bool empty(int, int);
bool full(int, int);
void addQ(int[], int, int*, int*);
void rmQ(int[], int*, int*);
void printQ(int q[]);

int main(int argc, char *argv[]) {
	int que[MAX] = {0};
	int front = 0, rear = 0;
	int temp;
	char input;
	while ((input = getchar()) != 'q') {
		switch (input) {
			case 'a':
				scanf("%d", &temp);
				addQ(que, temp, &front, &rear);
				break;
			case 'r':
				rmQ(que, &front, &rear);
				break;
			default:
				puts("Input 'a' to add 'r' to remove 'q' to quit.");
		}
		while (getchar() != '\n')
			continue;//ignore invalid input
		puts("result:");
		printQ(que);
	}
	return 0;
}

bool empty(int f, int r) {
	if (r == f)
		return true;
	else
		return false;
}

bool full(int f, int r) {
	if ((r+1)%MAX == f)
		return true;
	else
		return false;
}

void addQ(int q[], int add, int* f, int* r) {
	if (full(*f, *r)) {
		puts("This queue is full!");
		return;
	} else {
		*r = (*r+1)%8;
		q[*r] = add;
		return;
	}
}

void rmQ(int q[], int* f, int* r) {
	if (empty(*f, *r)) {
		puts("This queue is empty!");
		return;
	} else {
		*f = (*f+1)%8;
		q[*f] = 0;
		return;
	}
}

void printQ(int q[]) {
	for (int i = 0; i < MAX; i++)
		if (q[i]) printf("%d", q[i]);
	puts("");
	return;
}
