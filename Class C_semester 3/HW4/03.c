#include<stdio.h>
#include<string.h>
#define LEN 11
#define S 4

int main(void) {
    char str[LEN];
    char sub[S];
    char* pstr;
    scanf("%10s", str);
    scanf("%3s", sub);
    if (strstr(str, sub) != NULL) {
        pstr=strstr(str, sub)+strlen(sub);
        if (strstr(pstr, sub) != NULL)
            puts(strstr(pstr, sub));
        else
            puts("no exist");
    } else
        puts("no exist");

    return 0;
}