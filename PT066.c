#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void chuanHoa(char c[]){
    int thuong = 0, hoa = 0;
    for (int i=0;i<strlen(c);i++){
        if (c[i]>= 97 && c[i]<=122)
            thuong++;
        else if (c[i]>= 65 && c[i]<=90)
            hoa++;
    }
    if (thuong>=hoa){
        for (int i=0;i<strlen(c);i++){
            c[i] = towlower(c[i]);
        }
    }
    else{
        for (int i=0;i<strlen(c);i++){
            c[i] = toupper(c[i]);
        }
    }
}
void main(){
    char c[150];
    while(gets(c)){
        chuanHoa(c);
        puts(c);
    }
}