#include <stdio.h>
int main(void)
{
	int i, y, m, d;
	printf("input date:");
	scanf("%d", &i);
	y=i/10000;
	m=i%10000/100;
	d=i%100;
	printf("year:%d, month:%d, day:%d", y, m, d);
	return 0;
}
