//戈恨C 404632407 谅╕ 
#include<stdio.h>
int sum1(int x);//程ぇ㎝ 
int sum2(int y);//程玡ぇ㎝ 

int main(void) {
	int n;
	printf("叫块ヴ俱计:");
	scanf("%d", &n);
	printf("程玡羆㎝だ:%d,%d", sum1(n), sum2(n));
	return 0;
}

int sum1(int x) {
	int a[3];
	for(int i=0; i<=2; i++) {
		a[i]=x%10;
		x/=10;
	}
	return a[0]+a[1]+a[2];
} //皚い–计常单x计 礛–Ω常癶 暗Ω

int sum2(int y) {
	int b[3];
	while (true) {
		if (y/1000<1) {
			b[0]=y%10;
			b[1]=y/10%10;
			b[2]=y/100%10;
			break;
		}
		y/=10;
	}
	return b[0]+b[1]+b[2];
} //盢计埃逞 礛碞だ纗 
