#include<stdio.h>
#include<math.h>
int main(void) {
	float x;
	printf("%10s%20s\n", "Year", "Amount-on-deposit");
	for (int i=1;i<=10;i++) {
		x=1000*pow(1+0.05, i);
		printf("%10d%10.2f\n", i, x);
	}
	return 0;
} 
