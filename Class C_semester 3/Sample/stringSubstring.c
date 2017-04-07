#include<stdio.h>
#include<string.h>

#define SIZE 11
#define S 5

int main(void) {
    char string[SIZE];
    char sub[S];

    scanf("%10s", string);
    scanf("%4s", sub);
    if (strstr(string, sub) != NULL) 
        for (int i=0; string+i != strstr(string, sub); i++)
            printf("%c", string[i]);
    else 
        puts(string);
    
    return 0;
}