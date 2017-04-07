#include<stdio.h>
int main(void) {
	float x, z=1;
	int y;
	printf("x=");
	scanf("%f", &x);
	printf("y=");
	scanf("%d", &y);
	for (int i=1; i<=y; i++) {
		z*=x;
	} 
	printf("x**y=%.5f", z);
	return 0;
} 
