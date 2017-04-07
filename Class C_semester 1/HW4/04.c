#include <stdio.h>
int main(void){
	int a, b, c;
	printf("a, b, c ="); scanf("%d%d%d", &a, &b, &c);
	if (a>=b) {
		if (a>c) {
			printf("Max = %d", a);
		} else {
			printf("Max = %d", c);
		}
	} else {
		if (b>=c) {
			printf("Max = %d", b);
		} else {
			printf("Max = %d", c);
		}
	}
	return 0;
} 
