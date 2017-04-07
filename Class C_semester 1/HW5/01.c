#include <stdio.h>
int main(void){
	int score, level;
	printf("Score(0-100)="); scanf("%d", &score);
	printf("Level(1-4)="); scanf("%d", &level);
	if (level==4) {
		if (score>=60 && score<=100) {
			score+=8;
			printf("%d", score);
		} else if (score<60 && score>=0) {
			score+=3;
			printf("%d", score);
		} else {
			printf("Moron!");
		}
	} else if (level>=1 && level<=3) {
		if (score>=60 && score<=100) {
			score+=5;
			printf("%d", score);
		} else if (score<60 && score>=0) {
			score+=3;
			printf("%d", score);
		} else {
			printf("Moron!");
		}
	} else {
		printf("Moron!");
	}
	return 0;
} 
