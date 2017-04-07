#include <stdio.h>
int main(void){
	char i;
	int d, x;
	printf("請輸入學號:"); scanf("%c%d", &i, &d);
	if (i=='M') {
		x=(d/1000000+2)+2000;
		printf("等級: 研究生\n畢業年份: %d",x);
	} else {
		if (i=='B') {
			x=(d/1000000+4)+2000;
			printf("等級: 大學部\n畢業年份: %d", x);
		} else {
			printf ("Moron");
		}
	}
	return 0;
} 
