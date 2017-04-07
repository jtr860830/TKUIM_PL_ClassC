#include<stdio.h>
int main(void) {
	float n, f=0, i;
	printf("n=");
	scanf("%f", &n);
	printf("f=");
	for (i=n; i>=2; i--) {
		if (i==2) {
			printf("%.0f/%.0f=", i-1, i);
		} else {
			printf("%.0f/%.0f+", i-1, i);
		}
		f+=(i-1)/i;
	}
	printf("%f", f);
	return 0;
}
