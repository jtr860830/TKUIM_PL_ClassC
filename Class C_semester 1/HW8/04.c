#include<stdio.h>
#include<math.h>
int main(void) {
	int a, b, c;
	while (true) {
		printf("Input a, b, c:");
		scanf("%d%d%d", &a, &b, &c);
		float s=(a+b+c)/2.0, area;
		if (a+b>c && b+c>a && a+c>b) {
			area=sqrt(s*(s-a)*(s-b)*(s-c));
			printf("area = %.1f\n", area);
		} else {
			break;
		}
	}
	printf("Illegal triangle [Stop!]");
	return 0;
}
