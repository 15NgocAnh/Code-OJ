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
        if (c[i] == 'a' || c[i] =='o' || c[i] =='y' || c[i] == 'i' || c[i] =='e'|| c[i] =='u')
            count++;
    }
    return count;
}
void main(){
    char c[80];
    while (gets(c)){
        printf("%d\n",thongKe(c));
    }
}
