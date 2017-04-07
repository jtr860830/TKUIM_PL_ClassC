#include<stdio.h>
#include<string.h>
#define ROW 5
#define COL 10

int main(void) {
    char arr[ROW][COL];
    char p1[ROW*COL];
    for (int i=0; i<ROW; i++)
        scanf("%s", arr[i]);
    for (int i=0; i<ROW; i++)
        strcat(p1, arr[i]);
        
    puts(p1);
    return 0;
}