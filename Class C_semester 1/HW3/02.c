#include <stdio.h>
#include <math.h>
int main(void)
{
	float a, b, c, d;
	printf("input four numbers:"); scanf("%f %f %f %f", &a, &b, &c, &d);
	float x=(a+b+c+d)/4, y=sqrt((a*a+b*b+c*c+d*d)/4-x*x);
	printf("avg=%.2f\n", x);
	printf("std=%.2f", y);
	return 0;
}
