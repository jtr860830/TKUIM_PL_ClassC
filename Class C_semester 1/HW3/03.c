#include <stdio.h>
int main(void)
{
	char x;
	printf("等級:"); scanf("%c", &x);
	int a=int(x)*-10+745;
	printf("對應分數:%d",a);
	return 0;
}
