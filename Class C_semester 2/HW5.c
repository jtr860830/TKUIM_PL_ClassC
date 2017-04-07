//資管一C 404632407 謝禹沆
#include<stdio.h>

void getdata(int *x, int *y);
void all(int *x, int *y, int *n1, int *n2, int *n3, int *n4, int *n5);

int main(void) {
	int a, b;
	int number[5];
	getdata(&a, &b);
	all(&a, &b, number+0, number+1, number+2, number+3, number+4);
	printf("%d + %d = %d\n", a, b, number[0]);
	printf("%d - %d = %d\n", a, b, number[1]);
	printf("%d * %d = %d\n", a, b, number[2]);
	printf("%d / %d = %d\n", a, b, number[3]);
	printf("%d %% %d = %d", a, b, number[4]);
	return 0;
} 

void getdata(int *x, int *y) {
	printf("請輸入兩個整數:");
	scanf("%d%d", x, y);
}

void all(int *x, int *y, int *n1, int *n2, int *n3, int *n4, int *n5) {
	*n1=*x + *y;
	*n2=*x - *y;
	*n3=*x * *y;
	*n4=*x*1.0 / *y;
	*n5=*x % *y;
}
