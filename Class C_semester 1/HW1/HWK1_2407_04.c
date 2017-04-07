#include <stdio.h>
int main(void) {
	int x;
	float y, z;
	x=2;
	y=2.5*x*x*x-22.5*x+2.5;
	z=-y*y+12.8*y;
	printf("%6s%10s%10s\n", "x", "y", "z");
	printf("--------------------------------\n");
	printf("%6d%10.2f%10.2f\n", x, y, z);
	x=x+1;
	y=2.5*x*x*x-22.5*x+2.5;
	z=-y*y+12.8*y;
	printf("%6d%10.2f%10.2f\n", x, y, z);
	x=x+1;
	y=2.5*x*x*x-22.5*x+2.5;
	z=-y*y+12.8*y;
	printf("%6d%10.2f%10.2f\n", x, y, z);
	return 0;
}
