#include<stdio.h>
#include<string.h>
#define ROL 5
#define COL 10
#define INDEX "com"

int main(void) {
    char arr[ROL][COL];
    char* p1[5];
    for (int i=0; i<ROL; i++)
        scanf("%s", arr[i]);
    for(int i=0; i<ROL; i++)
        p1[i]=strstr(arr[i], INDEX);
    for(int i=0; i<ROL; i++)
        puts(p1[i]);
    return 0;
}