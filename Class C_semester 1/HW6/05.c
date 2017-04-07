#include<stdio.h>
int main(void) {
	float sum=0, cnt=1, n, x;
	printf("stud_no="); scanf("%f", &n);
	while (cnt<=n) {
		scanf("%f", &x);
		sum+=x;
		cnt=cnt+1;
	}
	printf("sum=%.0f/%.0f=%.1f", sum, n, sum/n);
	return 0;
} 
