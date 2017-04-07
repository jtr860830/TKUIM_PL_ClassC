#include<stdio.h>
int main(void) {
	int x, a=1, b, c, d=1;
	printf("x=");
	scanf("%d", &x);
	c=x;
	while ((x/10)!=0) {
		x/=10;
		d++;
	}
	printf("csv of x=");
	d-=1;
	for (int i=1; i<=d; i++) 
		a*=10;
	while (d>=0) {
		b=c/a;
		c=c-b*a;
		printf("%d", b);
		a/=10;
		if (d%3==0 && d!=0) 
			printf(",");
		d-=1;
	}
	return 0;
}
