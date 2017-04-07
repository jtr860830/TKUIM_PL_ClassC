#include<stdio.h>
#include<string.h>
#define LEN 11
#define S 4

int main(void) {
    char str[LEN];
    char sub[S];
    char* pstr;
    int cnt=0;

    scanf("%10s", str);
    scanf("%3s", sub);
    pstr=strstr(str, sub);
    while (pstr != NULL) {
        cnt++;
        pstr=strstr(pstr+strlen(sub), sub);
    }
    printf("%d", cnt);
    return 0;
}