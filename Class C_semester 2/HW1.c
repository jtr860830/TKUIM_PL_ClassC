#include<stdio.h>
int main(void) {
	int a, b, c;
	printf("請輸入一正整數:"); //印出此整數以下所有的質數 
	scanf("%d", &a);
	printf("此整數以下所有的質數:");
	while (a>=2) {	
	b=a-1;
		while (b>0) {
			c=a%b;
			if (c==0 && b>1) {
				break;
			} else if (b==1) {
				printf("%d ", a);
			}
			b--;
		}
	a--;
	}
	return 0;
}
