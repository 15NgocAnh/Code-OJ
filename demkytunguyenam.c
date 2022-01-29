#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int thongKe(char c[]){
    for (int i=0;i<strlen(c);i++){
        c[i] = tolower(c[i]);
    }
    int count = 0;
    for (int i=0;i<strlen(c);i++){
        if (c[i] == 'a' || c[i] =='e' || c[i] =='i' || c[i] == 'o' || c[i] =='u')
            count++;
    }
    return count;
}
void main(){
    char c[1000];
    gets(c);
    printf("%d",thongKe(c));
}
