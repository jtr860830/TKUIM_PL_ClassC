#include<stdio.h>
int main(void) {
	int a, b, min, i;
	printf("Input a,b:");
	scanf("%d%d", &a, &b);
	min=(a>b)?b:a;
	for (i=min; i>=1; i--) {
		if (a%i==0 && b%i==0)
		break;
	}
	printf("gcd=%d", i);
	return 0;
}
