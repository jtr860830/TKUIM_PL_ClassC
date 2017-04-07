#include <stdio.h>
int main(void){
	int s;
	printf("使用者輸入分數 :"); scanf("%d", &s);
	if (s>=60) {
		s+=5;
		if (s>100) {
			s=100;
		}
	} else {
		s+=3;
		if (s>59) {
			s=59;
		}
	}
	printf("%d", s);
	return 0;
}
