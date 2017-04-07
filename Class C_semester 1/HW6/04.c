#include<stdio.h>
int main(void) {
	int date, y, m, d;
	char c='y';
	while (c!='n') {
		printf("Input a date(8-digits):"); scanf("%d", &date);
		y=date/10000;
		m=date%10000/100;
		d=date%100;
		if (m<10) {
			if (d<10) {
				printf("date:%d/0%d/0%d\n", y, m, d);
			} else {
				printf("date:%d/0%d/%d\n", y, m, d);
			}
		} else {
			if (d<10) {
				printf("date:%d/%d/0%d\n", y, m, d);
			} else {
				printf("date:%d/%d/%d\n", y, m, d);
			}
		}
		if (m>12 || m<1) {
			printf("*Invalid month\n");
		}
		if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) {
			if (d>31 || d<1) {
				printf("*Invalid day\n");
			}
		} else {
			if (d>30 || d<1) {
				printf("*Invalid day\n");
			}
		}
		printf("continue(y/n)¡H"); scanf("%s", &c);
	}
	return 0;
}
 
