#include<stdio.h>
int main(void) {
	float a1, b1, c1, a2, b2, c2, x, y;
	printf("(a1,b1,c1):"); scanf("%f%f%f", &a1, &b1, &c1);
	printf("(a2,b2,c2):"); scanf("%f%f%f", &a2, &b2, &c2);
	if (b1<0) {
		if (b2<0) {
			printf("%.0fx%.0fy=%.0f\n", a1, b1, c1);
			printf("%.0fx%.0fy=%.0f\n", a2, b2, c2);
		} else {
			printf("%.0fx%.0fy=%.0f\n", a1, b1, c1);
			printf("%.0fx+%.0fy=%.0f\n", a2, b2, c2);
		}
	} else {
		if (b2>0) {
			printf("%.0fx+%.0fy=%.0f\n", a1, b1, c1);
			printf("%.0fx+%.0fy=%.0f\n", a2, b2, c2);
		} else {
			printf("%.0fx+%.0fy=%.0f\n", a1, b1, c1);
			printf("%.0fx%.0fy=%.0f\n", a2, b2, c2);
		}
	}
	if ((a1/a2)!=(b1/b2)) {
		x=(c1*b2-c2*b1)/(a1*b2-a2*b1);
		y=(a1*c2-a2*c1)/(a1*b2-a2*b1);
		printf("Ans: x=%.1f, y=%.1f", x, y);
	} else if ((a1/a2)==(b1/b2)) {
		if ((a1/a2)==(c1/c2)) {
			printf("Infinite Solutions");
		} else {
			printf("No Solutions");
		}
	}
	return 0;
} 
