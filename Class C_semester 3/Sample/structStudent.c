#include<stdio.h>

typedef struct {
    char name[30];
    int score[3];
    int average;
} STUDENT;

int main(void) {
    STUDENT student;
    STUDENT* p;
    p=&student;

    puts("name:");
    scanf("%30s", p->name); //scanf("%s", (*p).name);
    puts("3 scores:");
    for (int i=0; i<3; i++) {
        scanf("%d", p->score+i);
        (*p).average+=(*p).score[i];
    }
    (*p).average/=3;
    printf("%s\n", p->name);
    for (int i=0; i<3; i++) 
        printf("%d ", (*p).score[i]);
    printf("\n%s%d", "avg=", (*p).average);

    return 0;
}