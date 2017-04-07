#include<stdio.h>
int main(void) {
	int sum=1, n;
	printf("n=");
	scanf("%d", &n);
	for (int i=1;i<=n;i++) {
		sum*=i;
	}
	printf("%d!=%d", n, sum);
	return 0;
} 
