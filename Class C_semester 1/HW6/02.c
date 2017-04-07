#include<stdio.h>
#include<math.h>
int main(void) {
	int a ,b, c;
	float s, area;
	printf("Input three edge of a triangle:"); scanf("%d%d%d", &a, &b, &c);
	s=(a+b+c)/2.0;
	if (a+b>c && b+c>a && a+c>b) {
		if (a>b) {
			if (a>c) {
				printf("longest edge = %d\n", a);
			} else if (c>a) {
				printf("longest edge = %d\n", c);
			}
		} else if (b>a) {
			if (b>c) {
				printf("longest edge = %d\n", b);
			} else if (c>b) {
				printf("longest edge = %d\n", c);
			}
		}
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("Legal triangle\n");
		printf("area=%.2f", area);
	} else {
		printf("Illegal triangle");
	}
	return 0;
}
