#include <stdio.h>
int main(void){
	int score;
	scanf("%d", &score);
	if (score<=79) {
		if (score>=60) {
			printf("good");
		} else {
			printf("fail");
		}
	} else {
		if (score<=100) {
			printf("excellent");
		} else {
			printf("Moron");
		}
	}
	return 0;
} 
