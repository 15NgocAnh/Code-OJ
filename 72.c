#include <stdio.h>
#include <string.h>
#include <ctype.h>

int value(char c){
    if (c == 'I')
        return 1;
    if (c == 'V')
        return 5;
    if (c == 'X')
        return 10;
    if (c == 'L')
        return 50;
    if (c == 'C')
        return 100;
    if (c == 'D')
        return 500;
    if (c == 'M')
        return 1000;
}

int romanToDecimal(char s[]){
    int res = 0;
    for (int i=0;i<strlen(s);i++){
        int s1 = value(s[i]);
        if (i+1<strlen(s)){
            int s2 = value(s[i+1]);
            if (s1>=s2){
                res += s1;
            }
            else{
                res += (s2-s1);
                i++;
            }
        }
        else {
            res += s1;
        }
    }
    return res;
}

void main(){
    char c[1000];
    while (gets(c)){
        printf("%d\n",romanToDecimal(c));
    }
}