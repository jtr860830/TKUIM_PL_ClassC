#include<stdio.h>
int main(void) {
	int a, b, c, d, sum=0;
	printf("[lb,ub]=");
	scanf("%d%d", &a, &b);
	if (a%3==1) {
		c=a+2;
	} else if (a%3==2) {
		c=a+1;
	} else {
		c=a;
	}
	if (b%3==1) {
		d=b-1;
	} else if (b%3==2) {
		d=b-2;
	} else {
		d=b;
	}
	printf("Sum=");
	for (int i=c; i<=d; i+=3) {
		if (i==d) {
			printf("%d=", i);
		} else {
			printf("%d+", i);
		}
		sum+=i;
	}
	printf("%d", sum);
} 
