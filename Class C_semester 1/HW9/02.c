#include<stdio.h>
int main(void) {
	int x, a, b;
	printf("x=");
	scanf("%d", &x);
	printf("reverse=");
	while (true) {
		a=x%10;
		x/=10;
		printf("%d", a);
		if (x<1) 
			break;
	}
	return 0;
} 
