#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char c[500];
    scanf("%d",&n);
    getchar();
    gets(c);
    int len = strlen(c);
    if (n<=0 || n>=len)
        puts(c);
    else {
        if (c[n]==' '){
            for (int i=n+1;i<len;i++){
            printf("%c",c[i]);
            }
            for (int i=0;i<n;i++){
                printf("%c",c[i]);
            }
        }
        else {
            for (int i=n;i<len;i++){
            printf("%c",c[i]);
            }
            for (int i=0;i<n;i++){
                printf("%c",c[i]);
            }
        }
    }
}