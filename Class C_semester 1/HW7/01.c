#include<stdio.h>
int main(void) {
	int a, b, c, d, e, f;
	do {
		printf("Input two times:");
		scanf("%d%d", &a, &b);
		if (a>=0 && a<=24 && b>=0 && b<=59) {
			printf("Time1(h,m) = %d:%d (confirm)\n", a, b);
		} else {
			printf("Time1(h,m) = %d:%d\n", a, b);
		}
	} while (a<0 || a>24 || b<0 || b>59);
	
	do {
		printf("Input two times:");
		scanf("%d%d", &c, &d);
		if (c>=0 && c<=24 && d>=0 && d<=59) {
			printf("Time2(h,m) = %d:%d (confirm)\n", c, d);
		} else {
			printf("Time2(h,m) = %d:%d\n", c, d);
		}
	} while (c<0 || c>24 || d<0 || d>59);
	
	if (a>c) {
		if (b>d) {
			e=a-c;
			f=b-d;
		} else {
			f=b+60-d;
			e=a-1-c;
		}
	} else if (a<c) {
		if (d>=b) {
			e=c-a;
			f=d-b;
		} else {
			f=d+60-b;
			e=c-1-a;
		}
	} else {
			if (b>=d) {
			e=a-c;
			f=b-d;
		} else {
			f=d-b;
			e=a-c;
		}
	}
	printf("Diff of Time1 and Time2 = %d:%d", e, f);
	return 0;
} 
