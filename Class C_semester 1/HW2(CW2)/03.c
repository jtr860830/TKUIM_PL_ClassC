#include <stdio.h>
int main(void)
{
	float up, low, h;
	printf("up="); scanf("%f", &up);
	printf("low="); scanf("%f", &low);
	printf("h="); scanf("%f", &h);
	float area=(up+low)*h/2;
	printf("area=%.3f", area);
	return 0;
}
