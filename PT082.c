#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(){
    char c[1000];
    int a[2], cnt = 0;;
    int n = 0;
    gets(c);
    char *token = strtok(c,"-_;.,/|");
    while(token!=NULL){
        token = strtok(NULL,"-_;.,/|");
        a[cnt++] = (int)token;
    }
    printf("%d %d",a[1], a[0]);
    int money = (a[1]-a[0])*1200;
    printf("%d",money);
}