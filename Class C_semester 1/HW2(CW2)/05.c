#include <stdio.h>
int main(void)
{
	float h;
	printf("身高="); scanf("%f", &h);
	int a=h/2.54, b=a/12, c=a%12;
	printf("身高=%d尺%d吋", b, c);
	return 0;
 } 
