#include<stdio.h>
int main(void) {
	int x, y=1, d=0;
	printf("x=");
	scanf("%d", &x);
	while (true) {
		x/=10;
		d++;
		if (x<1)
			break;
	}
	printf("digits=%d", d);
	return 0;
} 
