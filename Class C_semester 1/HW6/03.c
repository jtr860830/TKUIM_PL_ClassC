#include<stdio.h>
#include<math.h>
int main(void) {
	float a, b, c, d, x1, x2;
	printf("a,b,c="); scanf("%f%f%f", &a, &b, &c);
	while (a!=0 && b!=0 && c!=0) {
		d=b*b-4*a*c;
		if (d>=0) {
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			printf("x1=%.1f, x2=%.1f\n", x1, x2);
		} else {
			x1=-b/(2*a);
			x2=sqrt(-d)/(2*a);
			printf("x1=%.1f+%.1fi, x2=%.1f-%.1fi\n", x1, x2, x1, x2);
		}
		printf("a,b,c="); scanf("%f%f%f", &a, &b, &c);
	}
	printf("bye!");
	return 0;
}
